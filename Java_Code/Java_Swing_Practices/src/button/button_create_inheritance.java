package button;

import javax.swing.JButton;
import javax.swing.JFrame;

public class button_create_inheritance extends JFrame{
	
	JFrame j;
	button_create_inheritance()
	{
		JButton b=new JButton("Click");//button create;
		b.setBounds(140, 130, 100, 50);
		add(b);
		setSize(400,400);
		setLayout(null);
		setVisible(true);
	}

	public static void main(String[] args)
	{
		
         new button_create_inheritance();
	}

}
