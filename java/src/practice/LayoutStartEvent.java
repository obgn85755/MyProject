package practice;
import javax.swing.*;

import java.awt.event.*;
import java.awt.*;

public class LayoutStartEvent {

	public static void main(String[] args) {
		JFrame frame=new JFrame("연습");
		Container pane=frame.getContentPane();

		JPanel p1=new JPanel();
		JPanel p2=new JPanel();
		JPanel p3=new JPanel();

		JLabel l11=new JLabel("국어:");
		JLabel l12=new JLabel("영어:");
		JLabel l13=new JLabel("수학:");

		JTextField kor=new JTextField();
		JTextField eng=new JTextField();
		JTextField math=new JTextField();

		p1.setLayout(new GridLayout(3,2));
		p1.add(l11); p1.add(kor);
		p1.add(l12); p1.add(eng);
		p1.add(l13); p1.add(math);

		JLabel l21=new JLabel("총점:");
		JLabel l22=new JLabel("평균:");
		JLabel l23=new JLabel("평가:");
		JLabel sum=new JLabel("  ");
		JLabel avg=new JLabel("  ");
		JLabel gra=new JLabel("  ");
		p2.setLayout(new GridLayout(3,2));
		p2.add(l21); p2.add(sum);
		p2.add(l22); p2.add(avg);
		p2.add(l23); p2.add(gra);

		JButton result=new JButton("결과");
		result.addActionListener(new ActionHandler(kor,eng,math,sum,avg,gra));
		JButton reset=new JButton("다시입력");
		reset.addActionListener(new ActionHandler(kor,eng,math,sum,avg,gra));
		
		p3.setLayout(new FlowLayout());
		p3.add(result); p3.add(reset);

		pane.add(p1, BorderLayout.WEST);
		pane.add(p2, BorderLayout.EAST);
		pane.add(p3, BorderLayout.SOUTH);

		frame.pack();
  		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
   		frame.setLocation(500, 400);
     	        frame.setVisible(true);
}
}


