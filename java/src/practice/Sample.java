import javax.swing.*;

import java.awt.*;


public class Sample extends JFrame{
	
	Sample(){
		
		setTitle("Java");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		Container c= getContentPane();
		GridLayout grid= new GridLayout(1,9);
		c.setLayout(grid);
		
		JButton b1 = new JButton("0");
		c.add(b1);
		b1.setBackground(Color.RED);
		JButton b2 = new JButton("1");
		c.add(b2);
		b2.setBackground(Color.ORANGE);
		JButton b3 = new JButton("2");
		c.add(b3);
		b3.setBackground(Color.YELLOW);
		JButton b4 = new JButton("3");
		c.add(b4);
		b4.setBackground(Color.GREEN);
		JButton b5 = new JButton("4");
		c.add(b5);
		b5.setBackground(Color.CYAN);
		JButton b6 = new JButton("5");
		c.add(b6);
		b6.setBackground(Color.BLUE);
		JButton b7 = new JButton("6");
		c.add(b7);
		b7.setBackground(Color.MAGENTA);
		JButton b8 = new JButton("7");
		c.add(b8);
		b8.setBackground(Color.GRAY);
		JButton b9 = new JButton("8");
		c.add(b9);
		b9.setBackground(Color.PINK);
		JButton b10 = new JButton("9");
		c.add(b10);
		b10.setBackground(Color.LIGHT_GRAY);
	
		
		
		setSize(500,200);
		setVisible(true);
	}

	
	
	
	public static void main(String[] args) {
		new Sample();
		
	}

}
