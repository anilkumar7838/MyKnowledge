/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package applet1;

/**
 *
 * @author anil kumar
 */
import java.awt.*;
import java.applet.Applet;
import java.util.*;

/*<applet code ="sample"width=10000 height=10000></applet>*/

public class myapplet extends Applet implements Runnable {

    Thread t, t1;

    public void init() {
        setBackground(Color.cyan);
        setForeground(Color.red);
       
    }

    public void start() {
        t = new Thread(this);
        t.start();
    }

    public void run() {
        t1 = Thread.currentThread();
        while (t1 == t) {
            repaint();
            try {
                t1.sleep(1000);
            } catch (InterruptedException e) {
            }
        }
    }

    public void paint(Graphics g) {
        Calendar cal = new GregorianCalendar();
        String hour = String.valueOf(cal.get(Calendar.HOUR));
        String minute = String.valueOf(cal.get(Calendar.MINUTE));
        String second = String.valueOf(cal.get(Calendar.SECOND));
        g.drawString(hour + ":" + minute + ":" + second, 100, 100);
    }
}
