package practice;
import javax.swing.*;

import java.awt.event.*;
import java.awt.*;
public class PrintButtons extends JFrame {
	
	PrintButtons(){
		Container contentPane = getContentPane();
		JLabel la= new JLabel("");
		
		setTitle("������");
		contentPane.setBackground(Color.ORANGE);
		contentPane.setLayout(new FlowLayout());
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		
		JButton btn1 = new JButton("�μ��ϱ�");
		JButton btn2 = new JButton("���ֱ̳�");
		JButton btn3 = new JButton("��������");
		
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
	MActionListener(JLabel la){this.la=la;}//������ �޼ҵ�
	
	public void actionPerformed(ActionEvent e){
		JButton b = (JButton)e.getSource();
		
		if(b.getText().equals("�μ��ϱ�"))
		{	if(paper==0)
			{la.setText("���� ����");}
			else
			{la.setText("���� 1�� ��");
			paper=paper-1;}
		}
		else if(b.getText().equals("���ֱ̳�"))
		{	la.setText("���� 10�� �߰�");
			paper=paper+10;
		}
		else if(b.getText().equals("��������"))
		{	la.setText(paper +"�� ������");
			
		}
	}
}