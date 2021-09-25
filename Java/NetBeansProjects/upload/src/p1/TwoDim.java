/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package p1;

/**
 *
 * @author user1
 */
public class TwoDim {
    private int x;
    private int y;
  public TwoDim()
  {
     x = 0; 
     y =0;
  }
  public TwoDim (int r,int i)
{        
 x = r;
 y = i;

}
     public String toString()
  {
     return  ("coordinate is:"+" ("+x+" , "+y+")");
 
   }
     public int getx()
     {
       return x;
     }
     public int gety()
     {
       return y;
     }
}
