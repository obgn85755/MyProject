package chapter14;

import javax.swing.*;

import java.awt.*;

public class TabbedPaneEx extends JFrame{
	Container contentPane;
	TabbedPaneEx(){
		setTitle("탭팬 만들기 예제");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		contentPane = getContentPane();
		JTabbedPane pane = createTabbedPane();
		contentPane.add(pane,BorderLayout.CENTER);
		setSize(1200,800);
		setVisible(true);
		
	}
	JTabbedPane createTabbedPane(){
		JTabbedPane pane = new JTabbedPane();
		pane.addTab("dagarn",new JLabel(new ImageIcon("images/dagarn.jpg")));
		pane.addTab("fighbird",new JLabel(new ImageIcon("images/fighbird.jpg")));
		pane.addTab("seven changer",new JLabel(new ImageIcon("images/seven.jpg")));
		pane.addTab("tab4",new MyPanel());
		return pane;
	}
	class MyPanel extends JPanel{
		MyPanel(){
			this.setBackground(Color.YELLOW);
			
		}
		public void paintComponent(Graphics g){
			super.paintComponent(g);
			g.setColor(Color.RED);
			g.fillRect(10,10,50,50);
			g.setColor(Color.BLUE);
			g.fillOval(10, 70, 50, 50);
			g.setColor(Color.BLACK);
			g.drawString("tab 3에 들어가는 JPanel 입니다",30,50);
			
		}
	}
	
	
	
	public static void main(String[] args) {
		new TabbedPaneEx();

	}

}
