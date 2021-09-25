/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package upload;

/**
 *
 * @author anLil kumar
 */
import java.awt.*;
import java.awt.event.*;
public class Q12 extends Frame implements ActionListener{
    Button button1,button2;
    String msg="";
    String name="";
    String course="";
    String roll="";
    String college="";
    Q12(){
    setLayout(new FlowLayout());
    
    button1=new Button("A");
    button2=new Button("B");
   // button1.setBounds(50,50,20,20);
   // button2.setBounds(80,80,20,20);
    setBackground(Color.cyan);
    setForeground(Color.red);
    add(button1);
    add(button2);
    button1.addActionListener(this);
    button2.addActionListener(this);
   
    }
   public void actionPerformed(ActionEvent e)
    {
        if(e.getSource()==button1){
        msg="";
         name    = " NAME = AnilKumar ";
         roll    =" ROLLNO=19HCS4068 ";
         course  = " COURSE=BSC(H)COMPUTER SCIENCE ";
         college = " COLLEGE=Deen Dayal Upadhayaya College ";
         repaint();
    }
       if(e.getSource()==button2){
      msg = " CGPA in previous Semester= 8.02";
     name="";
     course="";
     roll="";
     college="";
      repaint();
        }
    }
   public void paint(Graphics g){
       g.setFont(new Font("serif",Font.BOLD,20));
       g.drawString(msg,100, 100);
       g.drawString(name, 20, 80);
       g.drawString(course, 20, 120);
       g.drawString(roll, 20, 160);
       g.drawString(college, 20, 200);
    addWindowListener(new windowclose());
   }

    public static void main(String[] args)
    {
        Q12 ob=new Q12();
        ob.setSize(500,500);
        ob.setTitle("THIS IS Q12.");
        ob.setVisible(true);
      //  ob.setResizable(false);
    }
}
class windowclose extends WindowAdapter{
   public void windowClosing(WindowEvent we)
    {
        System.exit(0);
    }
}
