import javax.swing.*;

import java.awt.event.*;
import java.awt.*;

public class LabelEx extends JFrame{
	Container contentPane;
	LabelEx(){
		setTitle("레이블 예제");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		contentPane = getContentPane();
		contentPane.setLayout(new FlowLayout());
		
		JLabel textLabel = new JLabel("hello");
		
		ImageIcon a= new ImageIcon("images/seven.jpg");
		JLabel imageLabel= new JLabel(a);
		
		contentPane.add(textLabel);
		contentPane.add(imageLabel);
		
		setSize(400,600);
		setVisible(true);
	}
	
	public static void main(String[] args) {
		new LabelEx();
	}

}
