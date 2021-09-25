/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fun;

/**
 *
 * @author anil kumar
 */
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class MarioPloto extends JPanel implements ActionListener, KeyListener,Runnable{

    private boolean play = false;
    private int score = 0;
    private Timer timer;
    private int delay = 6;

    private int ballposX = 50;
    private int ballposY = 350;
    
   Thread t=null;

    public MarioPloto() {
        addKeyListener(this);
        setFocusable(true);
        setFocusTraversalKeysEnabled(false);
        timer = new Timer(delay, this);
        timer.start();
    }
public void start(){
 t=new Thread(this);
 t.start();
}
    public void paint(Graphics g) {
        //background
        g.setColor(Color.black);
        g.fillRect(1, 1, 692, 592);

        //borders
        g.setColor(Color.yellow);
        g.fillRect(0, 0, 3, 400);
        g.fillRect(0, 0, 692, 3);
        g.fillRect(691, 0, 3, 400);
        g.fillRect(0, 400, 692, 3);
        //the paddle
        g.setColor(Color.green);
        g.fillRect(0, 396, 692, 40);

        //scores
        g.setColor(Color.white);
        g.setFont(new Font("serif", Font.BOLD, 25));
        g.drawString("" + score, 590, 30);

        //the ball
        g.setColor(Color.yellow);
        g.fillOval(ballposX, ballposY, 45, 45);

    }

    public void actionPerformed(ActionEvent ae) {
    repaint();
}

public void keyTyped(KeyEvent e) {
    }

    public void keyReleased(KeyEvent e) {
    }

    public void keyPressed(KeyEvent e) {
        if (e.getKeyCode() == KeyEvent.VK_RIGHT) {
            if (ballposX >= 646) {
                ballposX = 646;
            } else {
                moveRight();

            }
        }
        if (e.getKeyCode() == KeyEvent.VK_LEFT) {
            if (ballposX <= 5) {
                ballposX = 5;
            } else {
                moveLeft();
            }
        }
         if (e.getKeyCode() == KeyEvent.VK_UP) {
            if (ballposY <= 250) {
                ballposY = 250;
            } else {
                play = true;
                ballposY -= 20;
            }
        }
          if (e.getKeyCode() == KeyEvent.VK_DOWN) {
            if (ballposY <=350) {
                ballposY = 350;
            } else {
                 play = true;
                ballposY += 20;
            }
        }

//        if (e.getKeyCode() == KeyEvent.VK_ENTER) {
//            if (!play) {
//                play = true;
//                ballposX = 120;
//                ballposY = 350;
//                ballXdir = -1;
//                ballYdir = -2;
//                player = 310;
//                score = 0;
//
//                repaint();
//            }
//   }
    }

    public void moveRight() {
        play = true;
        ballposX += 20;
        
    }

    public void moveLeft() {
        play = true;
        ballposX -= 20;
    }

    public static void main(String args[]) {
        JFrame obj = new JFrame();
        MarioPloto ob=new MarioPloto();
        obj.add(ob);
        obj.setResizable(false);
        obj.setVisible(true);
        obj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        obj.setBounds(10, 10, 700, 460);
        obj.setTitle("BOUNCING BALL");
    }

    @Override
    public void run() {
       // throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
        try{
      Thread.sleep(100);
      }catch(InterruptedException e){}
    }  
    
}
