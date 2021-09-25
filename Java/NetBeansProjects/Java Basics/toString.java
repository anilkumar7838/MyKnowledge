/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author user1
 */class pointcoordinate
 {
  int x,y;
  pointcoordinate(int x,int y)
  {
  this.x=x;
  this.y=y;
  }
 public String toString()
 {
    return "x = "+x+" y = "+y;
 }
 
 
 }
public class toString {
    public static void main(String a[])
    { 
        pointcoordinate point =new pointcoordinate(10,20);  
        System.out.println("point is: "+point);
        String s=point+"testing";
        System.out.println("new point is: "+s);
    }

}
