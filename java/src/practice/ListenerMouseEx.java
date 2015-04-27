import javax.swing.*;

import java.awt.event.*;
import java.awt.*;

public class ListenerMouseEx extends JFrame{
	ListenerMouseEx(){
		setTitle("버튼에 Mouse 이벤트 리스너 작성");
		setLayout(new FlowLayout());
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		JButton btn = new JButton("Mouse Event 테스트 버튼");
		btn.setBackground(Color.YELLOW);		
		MyMouseListener_2 listener= new MyMouseListener_2();
		btn.addMouseListener(listener);
		
		add(btn);
		setSize(300,150);
		setVisible(true);
	}
	public static void main(String[] args) {
		
		new ListenerMouseEx();
	}

}

class MyMouseListener_2 implements MouseListener{
	
	public void mouseEntered(MouseEvent e){
		JButton btn=  (JButton) e.getSource();
		btn.setBackground(Color.RED);
		
	}
	
	public void mouseExited(MouseEvent e){
		JButton btn = (JButton)e.getSource();
		btn.setBackground(Color.YELLOW);
		
	}
	
	public void mousePressed(MouseEvent e){}
	public void mouseReleased(MouseEvent e){}
	public void mouseClicked(MouseEvent e){}
	
	
	
}