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
public class block {
  public static int blocksize=20;
  private int x,y,r,g,b;
    public block(int x,int y,int r,int g,int b){
       this.x=x;
       this.y=y;
       this.r=r;
       this.g=g;
       this.b=b;
  }  
    public void draw(Graphics G){
    G.setColor(new Color(r,g,b));
    G.fillRect(x*blocksize, y*blocksize, blocksize, blocksize);
    }
    public void setColor(int r,int g, int b){
    this.r=r;
    this.g=g;
    this.b=b;
    
    }
}
