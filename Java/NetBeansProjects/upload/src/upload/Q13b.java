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
import javax.swing.*;

class Q13b extends JFrame {

    String msg = "";

       Q13b() {
        setSize(300, 200);
        setTitle("Pink Color");
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setBackground(Color.pink);
        setForeground(Color.yellow);

    }

    public void paint(Graphics g) {
        msg = "this is our practical number Q13b";
        g.drawString(msg, 50, 80);

    }

    public static void main(String[] args) {
        Q13b ob = new Q13b();
    }

}
