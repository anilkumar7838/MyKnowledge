/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fun;

/**
 *
 * @author anil kumar
 */
  import java.awt.*;
  import java.applet.*;
  public class bus extends Applet implements Runnable{
  private int delay=6,rectposx=50,rectposy=230,ovalposx1=60,ovalposy1=330,ovalposx2=180,ovalposy2=330;
  private Boolean play = false;
   Thread t=null;
    public void init(){
    setSize(1000,1000);
    setBackground(Color.orange);
    
    }
    public void start(){
    Thread t=new Thread(this);
    t.start();
    
    }
    public void stop(){}
    public void paint(Graphics g){
     
    g.setColor(Color.red);
    g.fillRect(rectposx,rectposy,180,100);
    g.setColor(Color.magenta);
    g.fillOval(ovalposx1,ovalposy1,35,35);
    g.setColor(Color.magenta);
    g.fillOval(ovalposx2,ovalposy2,35,35);
    
    }
    public void run(){
   // Thread.currentThread().setPriority(Thread.MIN_PRIORITY);
   for( ; ; ){
   if(rectposx<=700){ 
      rectposx+=10;
      ovalposx1+=10;
      ovalposx2+=10;
      repaint();
      try{
      Thread.sleep(100);
      }catch(InterruptedException e){}
    }
    if(rectposx>700){
      rectposx=50;rectposy=230;ovalposx1=60;ovalposy1=330;ovalposx2=180;ovalposy2=330;
       }
     }
   }
}
