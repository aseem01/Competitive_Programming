package button;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextField;

public class Java_button_ActionListener {

	public static void main(String[] args) 
	{
		
		
		
		//JFrame Creating;
		
		JFrame f=new JFrame("Java Button");
		f.setSize(400, 400);
		
		
		//JButton Creating;
	    
	    JButton b=new JButton("Click");
	    f.add(b);
	    b.setBounds(150, 100, 100, 50);
	    
	    
	    
	    //JTextField creating;
	    
	    
	    final JTextField tf=new JTextField();
	    tf.setBounds(120, 50, 150, 30);
	    f.add(tf);
	    
	    b.addActionListener(new ActionListener()
	    {
	    	public void actionPerformed(ActionEvent e)
	    	{
	    		tf.setText("Welcome Ashim Chakraborty");
	    	}
	    });
	    
	    f.setLayout(null);
	    f.setVisible(true);

	}

}
