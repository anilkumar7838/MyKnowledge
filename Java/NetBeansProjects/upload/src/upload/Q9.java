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

class Q9 extends Frame 
{
    String msg = "this is our practical number 9";
      Q9()
     {
        setBackground(Color.pink); 
        setForeground(Color.yellow);
        addWindowListener(new closeframe()); 
     } 
     
   public void paint(Graphics g){
    g.drawString(msg,30,50);
    }

    public static void main(String[] args)
    {
        Q9 ob = new Q9();
        ob.setSize(300,200);
        ob.setTitle("Pink Color");
        ob.setVisible(true);
    }
}

class closeframe extends WindowAdapter
{
    public void windowClosing(WindowEvent we)
    {
        System.exit(0);
    }
}
