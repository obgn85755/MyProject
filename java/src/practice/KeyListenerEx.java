package practice;
import javax.swing.*;

import java.awt.event.*;
import java.awt.*;


public class KeyListenerEx extends JFrame {
	JPanel contentPane= new JPanel();
	JLabel[] keyMessage;
	
	KeyListenerEx(){
		setTitle("KeyListener ����");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		setContentPane(contentPane);
		contentPane.addKeyListener(new MyKeyListener());
		
		keyMessage= new JLabel [3];
		keyMessage[0]= new JLabel(" getKeyCode()");
		keyMessage[1]= new JLabel(" getKeyChar()");
		keyMessage[2]= new JLabel(" getKeyText()");
		
		for(int i=0; i<keyMessage.length;i++){
			
			
			contentPane.add(keyMessage[i]);
			keyMessage[i].setOpaque(true);
			keyMessage[i].setBackground(Color.CYAN);
			
		}
		setSize(300,150);
		setVisible(true);
		
		contentPane.requestFocus();
	}
	class MyKeyListener extends KeyAdapter{
		public void keyPressed(KeyEvent e){
			int keyCode = e.getKeyCode();
			char keyChar = e.getKeyChar();
			keyMessage[0].setText(Integer.toString(keyCode));
			keyMessage[1].setText(Character.toString(keyChar));
			keyMessage[2].setText(e.getKeyText(keyCode));
			System.out.println("KeyPressed");
			
		}
		public void keyReleased(KeyEvent e){
			System.out.println("KeyReleased");
		}
		public void keyTyped(KeyEvent e){
			System.out.println("KeyTyped");
		}
		
	}
	
	
	
	
	public static void main(String[] args) {
		new KeyListenerEx();
	}

}
