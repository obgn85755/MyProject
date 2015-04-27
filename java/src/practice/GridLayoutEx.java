import javax.swing.*;

import java.awt.*;

public class GridLayoutEx extends JFrame{

	GridLayoutEx(){
		
		setTitle("GridLayout Sample");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		Container c=getContentPane();
		c.setLayout(new BorderLayout());
		
		JPanel p1= new JPanel();
		p1.setLayout(new GridLayout(3,2));
		
		p1.add(new JLabel("국어:"));
		p1.add(new JTextField(""));
		p1.add(new JLabel("영어:"));
		p1.add(new JTextField(""));
		p1.add(new JLabel("수학:"));
		p1.add(new JTextField(""));
		c.add(p1,BorderLayout.WEST);
		
		
		JPanel p2= new JPanel();
		p2.setLayout(new GridLayout(3,2));
		
		p2.add(new JLabel("총점:"));
		p2.add(new JLabel("  "));
		p2.add(new JLabel("평균:"));
		p2.add(new JLabel("  "));
		p2.add(new JLabel("평가:"));
		p2.add(new JLabel("  "));
		c.add(p2,BorderLayout.EAST);
		
		JPanel p3= new JPanel();
		p3.setLayout(new FlowLayout());
		p3.add(new JButton("결과"));
		p3.add(new JButton("다시입력"));
		c.add(p3,BorderLayout.SOUTH);
		
		
		pack();
		setVisible(true);
	}
	
	
	public static void main(String[] args) {
		
		new GridLayoutEx();
	}

}
