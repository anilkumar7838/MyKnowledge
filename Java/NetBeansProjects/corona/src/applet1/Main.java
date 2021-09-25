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
import javax.swing.JFrame;
public class Main {
  public static void main(String args[]){
  JFrame obj = new JFrame();
  Gameplay gameplay = new Gameplay();
  obj.setResizable(false);
  obj.setVisible(true);
  obj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
  obj.add(gameplay);
          
  obj.setBounds(10, 10, 700, 600);
  obj.setTitle("my first game");
    }
}
