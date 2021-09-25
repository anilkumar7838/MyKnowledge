/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package p2;
import p1.shape;
/**
 *
 * @author user1
 */
public class rectangle extends shape {
    

     double length;
     double breadth;
     public rectangle(double a,double b)
     {
         length=a;
         breadth=b;
     }
     public void area()
     {
         double area;
         area=length*breadth;
         System.out.print("The required area of the rectangle is::");
         System.out.println(area);
         
     }

}
