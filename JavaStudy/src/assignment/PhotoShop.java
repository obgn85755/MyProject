package assignment;

import javax.swing.*;

import java.awt.event.*;
import java.awt.*;
import java.util.*;

import javax.swing.filechooser.*;

public class PhotoShop extends JFrame{
	Container contentPane;
	MyPanel panel = new MyPanel();
	JLabel imageLabel = new JLabel();
	JTextField tf;
	JLabel textLabel = new JLabel();
	
	PhotoShop(){
		setTitle("그림판");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		contentPane = getContentPane();
		createMenu();
		createToolBar();
		
		contentPane.add(textLabel,BorderLayout.WEST);
		contentPane.add(imageLabel,BorderLayout.SOUTH);
		contentPane.add(panel, BorderLayout.CENTER);
		setSize(500,500);
		setVisible(true);
	}
	
	void createMenu(){
		JMenuBar mb = new JMenuBar();
		JMenu fileMenu = new JMenu("File");
		JMenu textMenu = new JMenu("Text");
		JMenu backgroundMenu = new JMenu("Background");
		
		JMenuItem openItem = new JMenuItem("Open");
		openItem.addActionListener(new OpenActionListener());
		
		JMenuItem  textColor= new JMenuItem("Color");
		textColor.addActionListener(new TMenuActionListener());
		
		JMenuItem  bgColor= new JMenuItem("Color");
		bgColor.addActionListener(new BgMenuActionListener());
		
		textMenu.add(textColor);	
		backgroundMenu.add(bgColor);	
		fileMenu.add(openItem);
		
		mb.add(fileMenu);
		mb.add(textMenu);
		mb.add(backgroundMenu);
		
		setJMenuBar(mb);
	}
	class OpenActionListener implements ActionListener{
		JFileChooser fchooser;
		
		OpenActionListener(){
			fchooser = new JFileChooser();
		}
		public void actionPerformed(ActionEvent e){
			FileNameExtensionFilter filter = new FileNameExtensionFilter(
					"JPG & GIF Images",
					"jpg","gif");
			
			fchooser.setFileFilter(filter);
			
			int ret=fchooser.showOpenDialog(null);
			if(ret != JFileChooser.APPROVE_OPTION){
				JOptionPane.showMessageDialog(null, "파일을 선택하지 않았습니다",
											  "경고",JOptionPane.WARNING_MESSAGE);
				return;
			}
			
			String filePath = fchooser.getSelectedFile().getPath();
			imageLabel.setIcon(new ImageIcon(filePath));
			imageLabel.setSize(300,300);
		}
		
	}
	
	void createToolBar(){
		JToolBar bar = new JToolBar("Tool");
		bar.setBackground(Color.LIGHT_GRAY);
		
		bar.add(new JLabel("TextField"));
		
		tf = new JTextField("text field");
		bar.add(tf);
		
		JButton btn = new JButton("Insert Text");	
		btn.addActionListener(new TfActionListener());
		bar.add(btn);
		
		contentPane.add(bar, BorderLayout.NORTH);	
	} 
	
	class TfActionListener implements ActionListener{
		public void actionPerformed(ActionEvent e){
			JButton b = (JButton)e.getSource();
			
			if(b.getText().equals("Insert Text")){				
				textLabel.setText(tf.getText());	
				panel.setVisible(false);
			}
		}
	}
	
	
	class MyPanel extends JPanel{
		Vector<Point> vStart = new Vector<Point>();
		Vector<Point> vEnd = new Vector<Point>();
		
		
		public MyPanel(){
			addMouseListener(new MouseAdapter(){
				public void mousePressed(MouseEvent e){
					Point startP = e.getPoint();
					vStart.add(startP);
				}
				public void mouseReleased(MouseEvent e){
					Point endP = e.getPoint();
					vEnd.add(endP);
					
					repaint();
				}
			});
		}
		
		public void paintComponent(Graphics g){
			super.paintComponent(g);
			g.setColor(Color.BLUE);
			
			
			for(int i=0;i<vStart.size();i++){
				Point s= vStart.elementAt(i);
				Point e= vEnd.elementAt(i);
				
				g.drawLine((int)s.getX(),(int)s.getY(),(int)e.getX(),(int)e.getY());
			}
		}
	}
	
	class TMenuActionListener implements ActionListener{
		JColorChooser chooser = new JColorChooser();
		
		public void actionPerformed(ActionEvent e){
			String cmd = e.getActionCommand();
			if(cmd.equals("Color")){
				Color selectedColor = chooser.showDialog(null,"Color",Color.YELLOW);
				
				if(selectedColor !=null)
					textLabel .setForeground(selectedColor);
			}
		}
	}
	
	
	class BgMenuActionListener implements ActionListener{
		JColorChooser chooser = new JColorChooser();
		
		public void actionPerformed(ActionEvent e){
			String cmd = e.getActionCommand();
			if(cmd.equals("Color")){
				Color selectedColor = chooser.showDialog(null,"Color",Color.YELLOW);
				
				if(selectedColor !=null){
					contentPane.setBackground(selectedColor);
					panel.setVisible(false);
				}
			}
		}
	}
	
	
	
	
	public static void main(String[] args) {
		new PhotoShop();
	}

}
