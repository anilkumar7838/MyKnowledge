/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package p3;
import p1.shape;
/**
 *
 * @author user1
 */
public class circle extends shape {
  
    double length;
    public circle(double a)
    {
        length=a;
    }
    
    public void area()
    {
       double area=(3.14*length*length);
       System.out.print("The required area of the circle is::");
       System.out.println(area);
  
        
    }
}
