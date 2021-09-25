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

class Q13a extends JFrame{

    Q13a()  {
        JLabel l = new JLabel();
       
        addMouseListener(new MouseAdapter() {
            public void mouseClicked(MouseEvent e) {
                l.setText(" Mouse Clicked ");
            }

            public void mouseEntered(MouseEvent e) {
                l.setText(" Mouse Entered ");
            }

            public void mouseExited(MouseEvent e) {
                l.setText(" Mouse Exited ");
            }
        }
        );
         setLayout(new FlowLayout());
        setBackground(Color.red);
        add(l);
    }

    public void paint(Graphics g) {}

    public static void main(String args[]) {
        Q13a ob = new Q13a();
        ob.setTitle("MOUSE EVENTS");
        ob.setSize(300, 300);
        ob.setVisible(true);
        ob.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
    }
}
