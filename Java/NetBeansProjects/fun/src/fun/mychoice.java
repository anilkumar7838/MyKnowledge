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
import java.applet.Applet;
import java.awt.event.*;
public class mychoice extends Applet implements ItemListener {
    Choice os,bro;
    String msg="";
    public void init(){
    os=new Choice();
    bro=new Choice();
    setBackground(Color.cyan);
    setForeground(Color.red);
    os.add("goku");
    os.add("vegeta");
    os.add("jiren");
    os.add("hit");
    bro.add("power10");
    bro.add("power20");
    bro.add("power30");
    bro.add("power50");
    bro.add("power70");
    bro.add("power90");
    bro.add("power100");
          
    bro.add("power101"); 
    bro.select("power50");
           
           add(os);
           add(bro);
           os.addItemListener(this);
           bro.addItemListener(this);
    }
    public void itemStateChanged(ItemEvent e){
    repaint();
    }
    public void paint(Graphics g){
    msg="current os = ";
    msg+=os.getSelectedItem();
    g.drawString(msg,6,120);
    msg="current bro = ";
    msg+=bro.getSelectedItem();
    g.drawString(msg,6,140);    
    }
}
