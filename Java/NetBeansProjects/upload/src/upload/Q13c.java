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

class Q13c extends JFrame implements ActionListener {

    JButton b1, b2;

    Q13c() {

    b1  = new JButton("Red");
    b2  = new JButton("Blue");

    add(b1);

    add(b2);

    setLayout(null);

    b1.setBounds (150, 50, 100, 20);
    b2.setBounds ( 150, 100, 100, 20);
    b1.addActionListener (this);
    b2.addActionListener (this);
    }
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == b1) {
            setBackground(Color.red);
        } else {
            setBackground(Color.blue);
        }
    }

    public static void main(String[] args) {
        Q13c ob = new Q13c();
        ob.setSize(400, 400);
        ob.setTitle("ButtonDemo");
        ob.setVisible(true);
        ob.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}

