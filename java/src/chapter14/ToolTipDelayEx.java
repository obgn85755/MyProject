package chapter14;

import javax.swing.*;

import java.awt.*;

public class ToolTipDelayEx extends JFrame{
	Container contentPane;
	
	ToolTipDelayEx(){
		setTitle("���� ���� �ð� ���� ����");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		contentPane = getContentPane();
		contentPane.setLayout(new FlowLayout());
		
		JLabel cherryLabel = new JLabel(new ImageIcon("images/"));
		cherryLabel.setToolTipText("ü�� �̹���");
		
		JLabel appleLabel = new JLabel(new ImageIcon("images/"));
		appleLabel.setToolTipText("��� �̹���");
		
		contentPane.add(cherryLabel);
		contentPane.add(appleLabel);
		
		ToolTipManager m = ToolTipManager.sharedInstance();
		m.setInitialDelay(0);
		m.setDismissDelay(10000);
		
		setSize(400,200);
		setVisible(true);
		
	}
	
	
	
	public static void main(String[] args) {
		new ToolTipDelayEx();
	}

}
