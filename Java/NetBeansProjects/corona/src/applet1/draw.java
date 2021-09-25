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
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.Timer;
import java.util.Random;
import java.awt.*;
import javax.swing.JPanel;
public class draw extends JPanel implements ActionListener{
    Timer t = new Timer(100,this);
    block[][] blocks=new block[20][20];
    Random r=new Random();
    
    public draw(){
     t.start();
     for(int i=0;i<blocks.length;i++){
     for(int j=0;j<blocks[0].length;j++){
     
      blocks[i][j]=new block(i,j,r.nextInt(255),r.nextInt(255),r.nextInt(255));         
     }
     }
    }
    public void updatecolor(){
     for(int i=0;i<blocks.length;i++){
     for(int j=0;j<blocks[0].length;j++){
     
      blocks[i][j].setColor(r.nextInt(255),r.nextInt(255),r.nextInt(255));         
     }
     }
    }
    public void actionPerformed(ActionEvent e){
    System.out.println("hello");
    updatecolor();
    repaint();
    
    }
   public void paint(Graphics g){
//   g.drawRect(10,10,10,10);
    for(int i=0;i<blocks.length;i++){
     for(int j=0;j<blocks[0].length;j++){
     
      blocks[i][j].draw(g);         
     }
     }

   }
}
