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
import java.applet.Applet;
public class Q11 extends Frame {
public String msg="";
    Q11(){
    addKeyListener(new mykeyadapter(this));
    setBackground(Color.cyan);
    setForeground(Color.red);
     addWindowListener(new closewin());
    }
   public void paint(Graphics g){
     g.setFont(new Font("serif",Font.BOLD,20));  
    g.drawString(msg,100,100);

    }
    public static void main(String args[]){
        Q11 ob=new Q11();
        ob.setSize(500,400);
        ob.setTitle("This is practical number 11.");
        ob.setVisible(true);
    }
}
class mykeyadapter extends KeyAdapter{
Q11 a;
 public mykeyadapter(Q11 x){
 a=x;
}
public void keyTyped(KeyEvent e){
 a.msg="Typed Character is: "+e.getKeyChar();
 a.repaint();
}
}
class closewin extends WindowAdapter
{
    public void windowClosing(WindowEvent we)
    {
        System.exit(0);
    }
}
