package practice;
import javax.swing.*;

import java.awt.*;

public class TextFieldEx extends JFrame{
	Container contentPane;
	TextFieldEx() {
	setTitle("�ؽ�Ʈ �ʵ� ����� ����");
	setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	contentPane= getContentPane();
	contentPane.setLayout(new FlowLayout());
	
	contentPane.add(new JLabel("�̸�: "));
	contentPane.add(new JTextField(10));
	contentPane.add(new JLabel("�а�: "));
	contentPane.add(new JTextField("�İ���"));
	contentPane.add(new JLabel("�ּ�: "));
	contentPane.add(new JTextField("�����", 20));
	
	setSize(350,200);
	setVisible(true);
	}
	
	
	public static void main(String[] args) {
		new TextFieldEx();

	}

}
