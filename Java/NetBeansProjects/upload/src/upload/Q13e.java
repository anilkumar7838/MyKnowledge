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
import javax.swing.*;
public class Q13e extends JFrame implements ActionListener{
    JButton button1,button2;
     JLabel l=new JLabel();
    Q13e(){
    setLayout(new FlowLayout());
    
    button1=new JButton("ButtonA");
    button2=new JButton("ButtonB");
    setBackground(Color.cyan);
    setForeground(Color.red);
    add(button1);
    add(button2);
    button1.addActionListener(this);
    button2.addActionListener(this);
    add(l);
    }
   public void actionPerformed(ActionEvent e)
    {
        if(e.getSource()==button1){
       
        l.setText("NAME = AnilKumar ");
        l.setText(" ROLLNO=19HCS4068 ");
        l.setText(" COURSE=BSC(H)COMPUTER SCIENCE ");
        l.setText(" COLLEGE=Deen Dayal Upadhayaya College ");
         l.setBounds(100,100,20,20);
    }
       if(e.getSource()==button2){
        l.setText(" CGPA in previous Semester= 8.02");
        }
    }
   public void paint(Graphics g){
   g.setColor(Color.red);
   }

    public static void main(String[] args)
    {
        Q13e ob=new Q13e();
        ob.setSize(500,500);
        ob.setTitle("THIS IS Q13e.");
        ob.setVisible(true);
        ob.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
      
    }
}
