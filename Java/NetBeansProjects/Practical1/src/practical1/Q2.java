/*name=anilkumar
  bsc(H)Computer Science
  SUBJECT=JAVA PROGRAMMING
  19HCS4068*/
package Practical2;

/**
 *
 * @author anil kumar
 */
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class Q2 extends JFrame{

    Q2()  {
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
        Q2 ob = new Q2();
        ob.setTitle("MOUSE EVENTS");
        ob.setSize(300, 300);
        ob.setVisible(true);
        ob.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
    }
}

