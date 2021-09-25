/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package q3;
import p1.shape;
import p2.rectangle;
import p3.circle;
import java.util.Scanner;
/**
 *
 * @author user1
 */
public class Q3 {

    public static void main(String[] args) {
        System.out.println("MENU");
        System.out.println("1.Rectangle");
        System.out.println("2.Circle");
        System.out.println("Enter the shape of choice::");
        Scanner sc=new Scanner(System.in);
        int choice=sc.nextInt();
        rectangle a;
        shape r;
        circle c;
        switch (choice) {
            case 1:
                double length;
                double breadth;
                System.out.println("Enter the length::");
                length=sc.nextDouble();
                System.out.println("Enter the breadth::");
                breadth=sc.nextDouble();
                a=new rectangle(length,breadth);
                r=a;
                r.area();
                break;
            case 2:
                double radius;
                System.out.println("Enter the radius of the circle::");
                radius=sc.nextDouble();
                c=new circle(radius);
                r=c;
                r.area();
                break;
            default:
                System.out.print("INVALID INPUT");
                break;
        } 
    }
    
}
