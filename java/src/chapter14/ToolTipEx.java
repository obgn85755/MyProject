package chapter14;

import javax.swing.*;

import java.awt.*;

public class ToolTipEx extends JFrame{
	Container contentPane;
	
	ToolTipEx(){
		setTitle("���� ����");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		contentPane=getContentPane();
		createToolBar();
		setSize(400,150);
		setVisible(true);		
	}
	
	void createToolBar(){
		JToolBar bar= new JToolBar("Menu");
		bar.setBackground(Color.LIGHT_GRAY);
		JButton newBtn= new JButton("New");
		newBtn.setToolTipText("������ �����մϴ�.");
		bar.add(newBtn);
		
		JButton openBtn = new JButton(new ImageIcon("images/"));
		openBtn.setToolTipText("������ ���ϴ�.");
		bar.add(openBtn);
		bar.addSeparator();
		
		JButton saveBtn = new JButton(new ImageIcon("images/"));
		saveBtn.setToolTipText("������ �����մϴ�.");
		bar.add(saveBtn);
		
		bar.add(new JLabel("search"));
		
		JTextField tf = new JTextField("text field");
		tf.setToolTipText("ã�����ϴ� ���ڿ��� �Է��ϼ���");
		bar.add(tf);
		contentPane.add(bar,BorderLayout.NORTH);
	
	}
	
	
	public static void main(String[] args) {
		new ToolTipEx();
	}

}
