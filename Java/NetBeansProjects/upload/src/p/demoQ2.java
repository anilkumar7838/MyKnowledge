/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package p;
import java.util.Scanner;
import p1.TwoDim;
import p2.ThreeDim;
/**
 *
 * @author user1
 */
public class demoQ2 {
    public static void main(String args[])
    {
      Scanner sc = new Scanner(System.in); 
      int a,b,c;
      System.out.println("**for 2d coordinate**");
      System.out.println("enter the x coordinate");
      a=sc.nextInt();
        System.out.println("enter the y coordinate");
       b =sc.nextInt();
      TwoDim p;
      p=new TwoDim(a,b);
      System.out.println(p);
      System.out.println("**for 3d cooordinate**");
         System.out.println("enter the x coordinate");
       int x=sc.nextInt();          
        System.out.println("enter the y coordinate");
        int y =sc.nextInt();
        System.out.println("enter the c coordinate");
         c =sc.nextInt();
      p=new ThreeDim(x,y,c);
      System.out.println(p);
    }
}
