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

 class Q8 extends Frame 
{
    String msg="";

     Q8()
    {
     addMouseListener(new MyMouseAdapter(this));
     setBackground(Color.cyan);
     setForeground(Color.red);
     addWindowListener(new close());
    }
    public void paint(Graphics g)
    {
        g.drawString(msg,100,100);
    }
    public static void main(String args[])
    {
        Q8 ob=new Q8();
        ob.setSize(300,300);
        ob.setTitle("MouseEvents");
        ob.setVisible(true);
    }
}


class close extends WindowAdapter
{
    public void windowClosing(WindowEvent we)
    {
        System.exit(0);
    }
}


class MyMouseAdapter extends MouseAdapter{
Q8 a;
public MyMouseAdapter(Q8 x){
 a=x;
}
public void mouseClicked(MouseEvent e){
 a.msg=" Mouse Clicked ";
 a.repaint();
}
public void mouseEntered(MouseEvent e){
 a.msg=" Mouse entered ";
 a.repaint();
}
public void mouseExited(MouseEvent e){
 a.msg=" Mouse exited ";
 a.repaint();
}
}