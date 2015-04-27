import javax.swing.*;

import java.awt.event.*;
import java.awt.*;


public class ComboActionEx extends JFrame{
	Container contentPane;
	String [] fruits= {"fighbird","dagarn","seven changer","goldran","shark" };
	ImageIcon [] images = {
			new ImageIcon("images/fighbird.jpg"),
			new ImageIcon("images/dagarn.jpg"),
			new ImageIcon("images/seven.jpg"),
			new ImageIcon("images/goldran.jpg"),
			new ImageIcon("images/shark.jpg")
	};
	
	JLabel imgLabel = new JLabel(images[0]);
	
	ComboActionEx(){
		setTitle("콤보박스 활용 예제");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		contentPane= getContentPane();
		contentPane.setLayout(new FlowLayout());
		
		JComboBox strCombo = new JComboBox(fruits);
		strCombo.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e){
			JComboBox cb = (JComboBox)e.getSource();
			int index= cb.getSelectedIndex();
			imgLabel.setIcon(images[index]);
			
			}
		});
		contentPane.add(strCombo);
		contentPane.add(imgLabel);
		
		
		setSize(900,900);
		setVisible(true);
	}
	
	
	
	
	public static void main(String[] args) {
		new ComboActionEx();
	}

}
