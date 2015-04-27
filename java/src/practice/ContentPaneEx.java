package practice;
import javax.swing.*;
import java.awt.*;

public class ContentPaneEx extends JFrame{

	ContentPaneEx(){
		
		setTitle("ContentPane°ú JFrame");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		Container contentPane= getContentPane();
		contentPane.setBackground(Color.ORANGE);
		contentPane.setLayout(new BorderLayout(5,7));
		
		contentPane.add(new JButton("OK"),BorderLayout.CENTER);
		contentPane.add(new JButton("Cancel"),BorderLayout.NORTH);
		contentPane.add(new JButton("Ignore"),BorderLayout.SOUTH);
		contentPane.add(new JButton("Hi"),BorderLayout.EAST);
		contentPane.add(new JButton("HELL"),BorderLayout.WEST);
		
		
		setSize(300,200);
		setVisible(true);
		
		
	}
	
	
	
	
	
	public static void main(String[] args) {
		new ContentPaneEx();

	}

}
