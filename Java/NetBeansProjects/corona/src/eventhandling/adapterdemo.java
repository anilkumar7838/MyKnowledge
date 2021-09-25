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
import java.applet.*;
public class adapterdemo extends Applet  {
    public void init(){
    addMouseListener(new MyMouseAdapter(this));
    addMouseMotionListener(new MyMouseMotionAdapter(this));
    setBackground(Color.cyan);
    setForeground(Color.red);
    }
}
class MyMouseAdapter extends MouseAdapter{
adapterdemo a;
public MyMouseAdapter(adapterdemo x){
 a=x;
}
public void mouseClicked(MouseEvent e){
 a.showStatus(" Mouse Clicked ");
}
}
class MyMouseMotionAdapter extends MouseMotionAdapter{
adapterdemo a;
public MyMouseMotionAdapter(adapterdemo x){
 a=x;
}
public void mouseDragged(MouseEvent e){
 a.showStatus(" Mouse Dragged ");
}
}  