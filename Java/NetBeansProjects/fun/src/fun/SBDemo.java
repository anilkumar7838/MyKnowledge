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
import java.awt.event.*;
import java.applet.*;
/*<applet code ="SBDemo"width=1000 height=1000></applet>*/
public class SBDemo extends Applet implements AdjustmentListener,MouseMotionListener{
    String msg="";
    Scrollbar ve,ho;
    public void init(){
    int width=Integer.parseInt(getParameter("width"));
    int height=Integer.parseInt(getParameter("height"));
    ve=new Scrollbar(Scrollbar.VERTICAL,0,1,0,height);
    ho=new Scrollbar(Scrollbar.HORIZONTAL,0,1,0,width);
    add(ve);
    add(ho);
    ve.addAdjustmentListener(this);
    ho.addAdjustmentListener(this);
    addMouseMotionListener(this);
    }
    public void adjustmentValueChanged(AdjustmentEvent e){
        repaint();
    }
    public void mouseDragged(MouseEvent e){
    int x=e.getX();
    int y=e.getY();
    ve.setValue(y);
    ho.setValue(x);
    repaint();
     }
    public void mouseMoved(MouseEvent e){}
    public void paint(Graphics g){
    msg="Vertical: "+ve.getValue();
    msg+=" ,Horizontal: "+ho.getValue();
    g.drawString(msg,6,160);
    g.drawString("*",ho.getValue(),ve.getValue());
    }
}
