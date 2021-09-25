/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author user1
 */
import java.util.Scanner;
class distance1{
int feet;
int inches;
  distance1(int feet,int inches)
 {
     this.feet =feet;
     this.inches =inches;
    }
 void calculate()
 {
  feet=feet+inches/12;
  inches=inches%12;
 }
 void display()
 {
   System.out.println("feet = "+ feet);
   System.out.println("inches = "+ inches);
 
 }
 distance1(distance1 d)
 {
   feet= d.feet;
   inches=d.inches;
 
 }
 
 
 
 };
 class Q10_demo {
   public static void main(String a[])
   {
    int feet;  
    int inches;
     System.out.println("enter the value of feet");
    Scanner sc=new Scanner(System.in);
      feet=sc.nextInt();
      System.out.println("enter the value of inches");
      inches=sc.nextInt();
      distance1 d;
      d=new distance1(feet, inches);
      d.calculate();
      d.display();
      System.out.println("assign object");
      distance1 t=d;
      t.calculate();
      t.display();
      System.out.println("after use of copy constuctor");
      distance1 b;
      b=new distance1(d);
      b.calculate();
      b.display();
   }
}