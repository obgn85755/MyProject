package assignment;

import javax.swing.*;

import java.awt.event.*;
import java.awt.*;

public class vehicleRent extends JFrame{
	Container contentPane;
	 vehicleRent(){
		 	setTitle("RENT");
			setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
			contentPane= getContentPane();
			contentPane.setLayout(null);
		 
			JPanel p1=new JPanel();
			JPanel p2=new JPanel();
			p1.setLayout(new FlowLayout());
			p2.setLayout(new GridLayout(2,4));
			
			ImageIcon logo= new ImageIcon("images/Rentieslogo.png");
			ImageIcon car= new ImageIcon("images/CarIn.gif");
			
			JLabel la1=new JLabel(logo);
			JLabel la2=new JLabel(car);
			JLabel la3 = new JLabel("차량이름:");
			JLabel la4= new JLabel("주행거리:");
			JLabel la5= new JLabel("대여상태:");
			JLabel la6 = new JLabel("대여가능");
			JLabel la7 = new JLabel(" ");
			JLabel la8 = new JLabel(" ");
			JList list = new JList();
			JButton b1=new JButton("차량구매");
			JButton b2=new JButton("빌려주기");
			JButton b3=new JButton("돌려받기");
			
			
			JTextField tf1=new JTextField();
			JTextField tf2=new JTextField();
			
			la1.setLocation(15,15);
			la1.setSize(150,50);
			p1.setLocation(200,15);
			p1.setSize(300,50);
			list.setLocation(15,70);
			list.setSize(150,200);
			p2.setLocation(200,70);
			p2.setSize(300,50);
			la2.setLocation(200,140);
			la2.setSize(300,150);
			
			MDActionListener listener = new MDActionListener();
			b1.addActionListener(listener);
			b2.addActionListener(listener);
			b3.addActionListener(listener);
			
			contentPane.add(la1);
			contentPane.add(p1);
			contentPane.add(list);
			contentPane.add(p2);
			contentPane.add(la2);
			p1.add(b1);
			p1.add(b2);
			p1.add(b3);
			p2.add(la3);
			p2.add(tf1);
			p2.add(la4);
			p2.add(tf2);
			p2.add(la5);
			p2.add(la6);
			p2.add(la7);
			p2.add(la8);
			setSize(550,350);
			setVisible(true);
	 }
	public static void main(String[] args) {
		new vehicleRent();
	}

}
class MDActionListener implements ActionListener
{

	public void actionPerformed(ActionEvent e) {
		
		
	}
	

}