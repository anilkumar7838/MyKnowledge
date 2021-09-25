/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package eventhandling;

/**
 *
 * @author anil kumar
 */
import java.awt.*;
import java.awt.event.*;
public class MouseEventDemo extends Frame implements MouseListener, MouseMotionListener 
{
String msg = "";
int mouseX = 0, mouseY = 0; //coordinates of mouse
public MouseEventDemo() {
addMouseListener(this);
addMouseMotionListener(this);
//AddWindowListener(new MyWindowAdapter());
}
public void mouseClicked(MouseEvent me) {
// save coordinates
mouseX = 0;
mouseY = 10;
msg = msg+ " Mouse clicked.";
repaint();
}

public void mouseEntered(MouseEvent me) {
// save coordinates
mouseX = 100;
mouseY = 10;
msg = "Mouse entered.";
repaint();
}
public void mouseExited(MouseEvent me) {
// save coordinates
mouseX = 0;
mouseY = 10;
msg = "Mouse exited.";
repaint();
}

public void mousePressed(MouseEvent me) {
// save coordinates
mouseX = me.getX();
mouseY = me.getY();
msg = " Button Down";
repaint();
}
public void mouseReleased(MouseEvent me) {
mouseX = me.getX();
mouseY = me.getY();
msg = " Button released";
repaint();
}
public void mouseDragged(MouseEvent me) {
mouseX = me.getX();
mouseY = me.getY();
msg = "* Dragging mouse at " + mouseX + ", " + mouseY;
repaint();
}
public void mouseMoved(MouseEvent me) {
mouseX = me.getX();
mouseY = me.getY();
msg = "* moving mouse at " + mouseX + ", " + mouseY;
repaint();
}
public void paint(Graphics g) {
g.drawString(msg, mouseX, mouseY);
}
public static void main(String args[])
{
MouseEventDemo appwin = new MouseEventDemo();
/*appwin.setSize(new Dimension(300,300));
appwin.setTitle(“MouseEventdemo”);
appwin.setVisible(true);
}}
Class MyWindowAdapter extends WindowAdapter
{
public void windowclosing(WindowEvent we)
 {
System.exit(0);*/
}
}

