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
class distance{
int feet;
int inches;
 void setvalues(int feet,int inches)
 {
     this.feet=feet;
     this.inches=inches;
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
 };
 class Q9_demo {
   public static void main(String a[])
   {
    int feet;  
    int inches;
     System.out.println("enter the value of feet");
    Scanner sc=new Scanner(System.in);
      feet=sc.nextInt();
      System.out.println("enter the value of inches");
      inches=sc.nextInt();
      distance d;
      d=new distance();
      d.setvalues(feet, inches);
      d.calculate();
      d.display();
      
      
   }
}
