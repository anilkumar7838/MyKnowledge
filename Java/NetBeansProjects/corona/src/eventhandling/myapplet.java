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
import java.awt.event.*;
import java.awt.*;
import java.applet.Applet;
public class myapplet extends Applet{
    Label l1,l2,l3;
    TextField t1,t2;
    Button b1;
    public void init(){
        setBackground(Color.green);
        setForeground(Color.red);
    l1=new Label("first number");
    l2=new Label("second number");
    l3=new Label();
    t1=new TextField();
    t2=new TextField();
    b1=new Button("ADD");
    setLayout(null);
    l1.setBounds(50,80,100,20);
    l2.setBounds(30,100,100,20);
    t1.setBounds(150,80,100,20);
    t2.setBounds(150,100,100,20);
    b1.setBounds(100,150,80,20);
    l3.setBounds(30,180,100,20);
    add(l1);
    add(l2);
    add(t1);
    add(t2);
    add(b1);
    add(l3);
   b1.addActionListener(new myhandler());
    }
    public class myhandler implements ActionListener{
    public void actionPerformed(ActionEvent e){
    int a,b,s;
    a=Integer.parseInt(t1.getText());
    b=Integer.parseInt(t2.getText());
    s=a+b;
    l3.setText("sum is "+s);
    }
    }
}
