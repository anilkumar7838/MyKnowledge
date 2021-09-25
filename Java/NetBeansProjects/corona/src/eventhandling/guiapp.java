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
public class guiapp implements ActionListener{
    Frame f;
    Label l1,l2,l3;
    TextField t1,t2;
    Button b1;
     guiapp(){
         f=new Frame("made by **anilkumar**");
         f.setVisible(true);
         f.setLocation(400,100);
         f.setSize(180,200);
         f.setBackground(Color.green);
         f.setForeground(Color.red);
    l1=new Label("first number");
    l2=new Label("second number");
    l3=new Label();
    t1=new TextField();
    t2=new TextField();
    b1=new Button("ADD");
    f.setLayout(new FlowLayout());
    l1.setBounds(50,80,500,20);
    l2.setBounds(30,100,500,20);
    l3.setBounds(20,180,120,20);
    t1.setBounds(150,80,120,20);
    t2.setBounds(150,100,100,20);
    b1.setBounds(100,150,80,20);
    f.add(l1);
    f.add(t1);
    f.add(l2);
    f.add(t2);
    f.add(b1);
    f.add(l3);
    b1.addActionListener(this);
    f.addWindowListener(new close());
    }
      public void actionPerformed(ActionEvent e){
    int a,b,s;
    a=Integer.parseInt(t1.getText());
    b=Integer.parseInt(t2.getText());
    s=a+b;
    l3.setText("sum is "+s);
    }
   public  static void main(String args[]){
      guiapp g=new guiapp();
    //  g.setDefaultCloseOperation(Frame.EXIT_ON CLOSE);
}
}
   class close extends WindowAdapter
{
    public void windowClosing(WindowEvent we)
    {
        System.exit(0);
    }
}


