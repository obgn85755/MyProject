package chapter14;

import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class MenuActionEventEx extends JFrame{
	Container contentPane;
	JLabel label = new JLabel("Hello");
	
	MenuActionEventEx(){
		setTitle("Menu에 Action 리스너 만들기 예제");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		contentPane= getContentPane();
		label.setHorizontalAlignment(SwingConstants.CENTER);
		contentPane.add(label,BorderLayout.CENTER);
		createMenu();
		setSize(250,200);
		setVisible(true);
	}
	void createMenu(){
		JMenuBar mb= new JMenuBar();
		JMenuItem [] menuItem = new JMenuItem[4];
		JMenuItem [] colorItem = new JMenuItem[4];
		String[] itemTitle = {"Color","Font","Top","Bottom"};
		String[] colorName= {"RED", "GREEN", "BLUE", "YELLOW"};
		JMenu textMenu = new JMenu("Text");
		JMenu bg= new JMenu("Background");
		MenuActionListener listener=new MenuActionListener();
		for(int i=0;i<menuItem.length;i++){
			menuItem[i]= new JMenuItem(itemTitle[i]);
			menuItem[i].addActionListener(listener);
			
			textMenu.add(menuItem[i]);
			
		}
		for(int i=0; i<colorItem.length;i++){
			colorItem[i]= new JMenuItem(colorName[i]);
			colorItem[i].addActionListener(listener);
			
			bg.add(colorItem[i]);
		}
		
		textMenu.addSeparator();
		textMenu.add(bg); 
		
		bg.addActionListener(new MenuActionListener());
		mb.add(textMenu);
		setJMenuBar(mb);
	}
	
	class MenuActionListener implements ActionListener{
		public void actionPerformed(ActionEvent e){
		String cmd= e.getActionCommand();
			if(cmd.equals("Color"))
				label.setForeground(Color.BLUE);
			else if(cmd.equals("Font"))
				label.setFont(new Font("Ravie", Font.ITALIC,30));
			else if(cmd.equals("Top"))
				label.setVerticalAlignment(SwingConstants.TOP);
			else if(cmd.equals("BOTTOM"))
				label.setVerticalAlignment(SwingConstants.BOTTOM);
			else if(cmd.equals("RED"))
				contentPane.setBackground(Color.RED);
			else if(cmd.equals("GREEN"))
				contentPane.setBackground(Color.GREEN);
			else if(cmd.equals("BLUE"))
				contentPane.setBackground(Color.BLUE);
			else if(cmd.equals("YELLOW"))
				contentPane.setBackground(Color.YELLOW);
			
			
		}
	}
	
	
	
	public static void main(String[] args) {
		new MenuActionEventEx();
	}

}
