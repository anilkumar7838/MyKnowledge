/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 *//*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package eventhandling;

/**
 *
 * @author anil kumar
 */
import java.awt.event.*;
import java.awt.*;
import java.applet.Applet;
public class myevent1 extends Applet implements ActionListener{
    Button b1;
    Button b2;
    public void init(){
    setForeground(Color.magenta);
    b1=new Button("BLUE");
    b2=new Button("RED");
    setLayout(null);
    b1.setBounds(50,80,100,20);
    b2.setBounds(50,120,100,20);
    add(b1);
    add(b2);
   b1.addActionListener(this);
   b2.addActionListener(this);
   }
    public void actionPerformed(ActionEvent e){
    if(e.getSource()==b1){
    setBackground(Color.blue);
    }
    else
      setBackground(Color.red);  
    }
    public void paint(Graphics g){
    showStatus(" Anil Kumar ");
    }
}