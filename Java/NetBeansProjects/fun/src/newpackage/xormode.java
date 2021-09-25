/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package newpackage;

/**
 *
 * @author anil kumar
 */
import java.awt.*;
import java.applet.*;
import java.awt.event.*;
public class xormode extends Applet{
int chx=100,chy=100;
 public xormode(){
 setBackground(Color.BLACK);
 addMouseMotionListener(new MouseMotionAdapter(){

 public void mouseMoved(MouseEvent e){
 int x=e.getX();
 int y=e.getY();
 chx=x-10;
 chy=y-10;
 repaint();
 }
 });
 }
    
 public void paint(Graphics g){
 g.setColor(Color.blue);
 g.drawLine(0,100,100,0);
 g.setXORMode(Color.green);
 g.drawLine(chx-10,chy,chx+10,chy);
 g.drawLine(chx,chy-10,chx,chy+10);
 g.setPaintMode();
 }   
}
