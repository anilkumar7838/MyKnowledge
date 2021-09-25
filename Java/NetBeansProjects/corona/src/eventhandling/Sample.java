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
import java.applet.*;
/*<applet code ="sample"width=300 height=50></applet>*/
public class Sample extends Applet {
String msg;
public void init(){
setBackground(Color.cyan);
setForeground(Color.red);
  //msg ="Inside init( ) --";
} 
    public void start(){
    //msg +=" Inside start( ) --";
    }
    public void paint(Graphics g){
        msg = " Inside paint( ) .";
        g.drawString(msg,30,50); 
    }
}
