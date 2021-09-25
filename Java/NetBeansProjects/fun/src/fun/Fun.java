/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fun;

/**
 *
 * @author anil kumar
 * incomplete moving
 */
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Fun extends JPanel implements Runnable {//KeyListener
 private int delay=6,rectposx=50,rectposy=230,ovalposx1=60,ovalposy1=330,ovalposx2=180,ovalposy2=330;
 private Boolean play = false;
    Fun()
      {
      //  addKeyListener(this);
        setFocusable(true);
        setFocusTraversalKeysEnabled(false);
        }
    public void paint(Graphics g){
    
    g.setColor(Color.orange);
    g.fillRect(0,0,1000,1000);
    g.setColor(Color.red);
    g.fillRect(rectposx,rectposy,180,100);
    g.setColor(Color.magenta);
    g.fillOval(ovalposx1,ovalposy1,35,35);
    g.setColor(Color.magenta);
    g.fillOval(ovalposx2,ovalposy2,35,35);
    
    }
    public void start(){
   Thread t =new Thread(this);
    t.start(); 
    run();
    }
    public void run(){  
    if(true){ 
      rectposx+=10;
      ovalposx1+=10;
      ovalposx2+=10;
      repaint();
    }
      try{
      Thread.sleep(100);
      }catch(InterruptedException e){}
    }
//     public void keyTyped(KeyEvent e){}
//    public void keyReleased(KeyEvent e){}
//    public void keyPressed(KeyEvent e){
//    if(e.getKeyCode()==KeyEvent.VK_ENTER)
//    {
//      play=true;
//     
//    }
//    }
    public static void main(String[] args) {
        Fun f=new Fun();
        JFrame obj = new JFrame();
        obj.setResizable(false);
        obj.setVisible(true);
        obj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        obj.add(f);   
       obj.setBounds(10, 10, 1000, 1000);
       obj.setTitle(" Moving car ");
    }
    
}
