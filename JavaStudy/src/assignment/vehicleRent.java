package assignment;

import javax.swing.*;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionListener;

import java.awt.event.*;
import java.awt.*;
import java.util.*;

public class vehicleRent extends JFrame{
	Container contentPane;	Car c;
	HashMap<String,Car> map = new HashMap<String,Car>();
	ImageIcon logo= new ImageIcon("images/Rentieslogo.png");
	JPanel p1=new JPanel();
	JPanel p2=new JPanel();
	JLabel la1=new JLabel(logo);
	JLabel la2=new JLabel();
	JLabel la3 = new JLabel("차량이름:");
	JLabel la4= new JLabel("주행거리:");
	JLabel la5= new JLabel("대여상태:");
	JLabel la6 = new JLabel("");
	JLabel la7 = new JLabel(" ");
	JLabel la8 = new JLabel(" ");
	JList list = new JList();
	ImageIcon carIn= new ImageIcon("images/CarIn.gif");
	ImageIcon carOut= new ImageIcon("images/CarOut.gif");
	JButton b1=new JButton("차량구매");
	JButton b2=new JButton("빌려주기");
	JButton b3=new JButton("돌려받기");
	
	
	JTextField tf1=new JTextField();
	JTextField tf2=new JTextField();
	
	 vehicleRent(){
		 	setTitle("RENT");
			setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
			contentPane= getContentPane();
			contentPane.setLayout(null);		 
					 	
			p1.setLayout(new FlowLayout());
			p2.setLayout(new GridLayout(2,4));								
						
			la1.setLocation(15,15);
			la1.setSize(150,50);
			p1.setLocation(200,15);
			p1.setSize(300,50);
			list.setLocation(15,70);
			list.setSize(150,200);
			p2.setLocation(200,70);
			p2.setSize(300,50);
			la2.setLocation(180,140);
			la2.setSize(350,200);
			
			MDActionListener listener = new MDActionListener();
			MyListSelectionListener listSlect= new MyListSelectionListener();
			
			list.addListSelectionListener(listSlect);
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
	 
	 class MDActionListener implements ActionListener{	
		
		 
	 	public void actionPerformed(ActionEvent e) {
	 		JButton b = (JButton)e.getSource();
	 		carIn.getImage().flush();
 			carOut.getImage().flush();
 			
	 		if(b.getText().equals("차량구매")){			 				 				 			
	 			la2.setIcon(carIn);
	 			map.put( tf1.getText(),new Car(tf1.getText(),Integer.parseInt(tf2.getText())));
	 			list.setListData(map.keySet().toArray());
	 			list.updateUI();	
	 			
	 			
	 		}
	 		else if(b.getText().equals("빌려주기")){	 			
	 			if(c.getStatus()==1){
	 				la2.setIcon(carOut);
	 				c.setStatus(0);
	 				if(c.getStatus()==0)
	 					la6.setText("대여 중");
	 				
		 			
	 			}
	 		}
	 		else if(b.getText().equals("돌려받기")){
	 			if(c.getStatus()==0){
	 				la2.setIcon(carIn);
	 				c.setStatus(1);
	 				if(c.getStatus()==1)
	 					la6.setText("대여 가능");
	 				c.plusDistance(Integer.parseInt(tf2.getText()));
	 				tf2.setText(Integer.toString(c.getDistance()));
	 			
		 			
	 			}
	 		}
	 	}	 	
	 }

	 class MyListSelectionListener implements ListSelectionListener{
		
		
		public void valueChanged(ListSelectionEvent e) {
			JList b=(JList)e.getSource();
			c = map.get(b.getSelectedValue());
			tf1.setText(c.getName());
			tf2.setText(Integer.toString(c.getDistance()));	
			
			if(c.getStatus()==1)
				la6.setText("대여 가능");
			
			else
				la6.setText("대여 중");
			
			
		}
		 
	 }
	public class Car{
		String name;
		int distance;
		int status;
		 public Car( String name,int distance){
			 this.name=name;	this.distance=distance; status=1;
		 }
		  public int getDistance(){
			 return distance;
		 }
		  public String getName(){
			  return name;
		  }
		  public void setStatus(int status){
			  this.status=status;
		  }
		  public int getStatus(){
			  return status;
		  }
		  public void plusDistance(int distance){
			  this.distance+=distance;
		  }
	 }
	 
	 
	public static void main(String[] args) {
		new vehicleRent();
	}

}