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

public class frameevent extends Applet {
    public void init(){
    addMouseListener(new MymouseAdapter(this));
    addMouseMotionListener(new MymouseMotionAdapter(this));
    setBackground(Color.cyan);
    setForeground(Color.red);
    }
}
class MymouseAdapter extends MouseAdapter{
frameevent a;
public MymouseAdapter(frameevent x){
 a=x;
}
public void mouseClicked(MouseEvent e){
 a.showStatus(" Mouse Clicked ");
}
}
class MymouseMotionAdapter extends MouseMotionAdapter{
frameevent a;
public MymouseMotionAdapter(frameevent x){
 a=x;
}
public void mouseDragged(MouseEvent e){
 a.showStatus(" Mouse Dragged ");
}
}  

