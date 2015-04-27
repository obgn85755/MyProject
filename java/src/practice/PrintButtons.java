package practice;
import javax.swing.*;

import java.awt.event.*;
import java.awt.*;
public class PrintButtons extends JFrame {
	
	PrintButtons(){
		Container contentPane = getContentPane();
		JLabel la= new JLabel("");
		
		setTitle("프린터");
		contentPane.setBackground(Color.ORANGE);
		contentPane.setLayout(new FlowLayout());
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		
		JButton btn1 = new JButton("인쇄하기");
		JButton btn2 = new JButton("종이넣기");
		JButton btn3 = new JButton("남은종이");
		
		MActionListener listener= new MActionListener(la);
		btn1.addActionListener(listener); 
		btn2.addActionListener(listener);
		btn3.addActionListener(listener);
		
		contentPane.add(btn1);
		contentPane.add(btn2);
		contentPane.add(btn3);
		contentPane.add(la);
		
		setSize(300,200);
		setVisible(true);
		
	}
	
	public static void main(String[] args) {
		new PrintButtons();
	}

}
class MActionListener implements ActionListener{
	JLabel la;
	int paper=0;
	MActionListener(JLabel la){this.la=la;}//생성자 메소드
	
	public void actionPerformed(ActionEvent e){
		JButton b = (JButton)e.getSource();
		
		if(b.getText().equals("인쇄하기"))
		{	if(paper==0)
			{la.setText("종이 없음");}
			else
			{la.setText("종이 1장 씀");
			paper=paper-1;}
		}
		else if(b.getText().equals("종이넣기"))
		{	la.setText("종이 10장 추가");
			paper=paper+10;
		}
		else if(b.getText().equals("남은종이"))
		{	la.setText(paper +"장 남았음");
			
		}
	}
}