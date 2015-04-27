package practice;
import javax.swing.*;

import java.awt.event.*;
import java.awt.*;

public class MouseListenerEx extends JFrame{
	JPanel contentPane = new JPanel();
	  JLabel la=new JLabel("hello");
	
	MouseListenerEx(){
		setTitle("Mouse 이벤트 예제");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		contentPane.addMouseListener(new MyMouseListener(la));
		
		
		la.setSize(50,20);
		la.setLocation(30,30);
		contentPane.add(la);
		setSize(200,200);
		setVisible(true);
	}
	
	public static void main(String[] args) {
		
		new MouseListenerEx();
	}

}

class MyMouseListener extends MouseAdapter{
	JLabel la;
	MyMouseListener(JLabel la){
		this.la=la;
		
	}
	public void mousePressed(MouseEvent e){
		int x=e.getX();
		int y=e.getY();
		la.setLocation(x,y);	
	}
	
}


