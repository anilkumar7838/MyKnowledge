/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package upload;

/**
 *
 * @author anil kumar
 */
import java.awt.*;
import java.awt.event.*;

class Q10 extends Frame implements ActionListener
{
   
    Button b1,b2;

    public Q10()
    {
        setLayout(new FlowLayout());
        b1 = new Button("Red");
        b2 = new Button("Blue");

        add(b1);
        add(b2);

        b1.addActionListener(this);
        b2.addActionListener(this);
        
        setBackground(Color.magenta);
        addWindowListener(new closing());
     }
   
    public void actionPerformed(ActionEvent e)
    {
        if(e.getSource()==b1){
       setBackground(Color.red);
    }
    else
      setBackground(Color.blue);  
    }

    public static void main(String[] args)
    {
        Q10 ob=new Q10();
        ob.setSize(400,400);
        ob.setTitle("ButtonDemo");
        ob.setVisible(true);
    }
}
class closing extends WindowAdapter
{
    public void windowClosing(WindowEvent we)
    {
        System.exit(0);
    }
}