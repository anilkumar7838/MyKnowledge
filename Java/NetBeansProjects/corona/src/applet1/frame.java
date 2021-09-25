/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package applet1;

/**
 *
 * @author anil kumar
 */  
import java.awt.*;
import javax.swing.JFrame;
public class frame extends JFrame{
   
    public frame(){
    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    setTitle("flickering colors");
    setSize(400,400);
    setResizable(true);
    setLocationRelativeTo(null);
   
    init();
    }
    public void init(){
    setLayout(new GridLayout(1,1,0,0));
    draw d=new draw();
    add(d);
    setVisible(true);
    }
    public static void main(String args[]){
    frame f=new frame();
    
    }
    
}
