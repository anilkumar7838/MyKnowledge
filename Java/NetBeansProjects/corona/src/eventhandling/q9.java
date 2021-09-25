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
public class q9 extends Applet  {
String msg;
public void init(){
setBackground(Color.pink);
setForeground(Color.yellow);
msg = "this is our practical number 9";
} 
   public void paint(Graphics g){ 
    g.drawString(msg,30,50);
      
    }
}
