/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package upload;

/**
 *
 * @author anil kumar
 */
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class Q13d extends JFrame {
 JLabel l=new JLabel();
    Q13d(){
    addKeyListener(new KeyAdapter(){
        public void keyTyped(KeyEvent e){
      l.setText("Typed Character is: "+e.getKeyChar());
     }
    });
    setLayout(new FlowLayout());;
    setBackground(Color.cyan);
   // setForeground(Color.red);
    add(l);
    }
   public void paint(Graphics g){
      
    }
    public static void main(String args[]){
        Q13d ob=new Q13d();
        ob.setSize(450,200);
        ob.setTitle("This is practical number 11.");
        ob.setVisible(true);
        ob.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}