/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author user1
 */import java.util.Scanner;
 class Q11{  
  int side1;
  int side2;
  int side3;
  void volume(int l,int b,int h)
  {
    side1=l;
    side2=b;
    side3=h;
    int area= l*b*h;
    System.out.println("volume or cuboid is "+area);
  }
  void volume(int a)
  {
   side1=side2=side3=a;
   int area= a*a*a;
   System.out.println("volume of cube "+area);
  } 
 };
public class Q11demo {
    
    public static void main(String arg[]){
        char c;
                
    do{    
    System.out.println("choose an option");
    Scanner sc=new Scanner(System.in);
    System.out.println("1:for volume of cuboid");
    System.out.println("2:for volume of cube");
    int n=sc.nextInt();
    switch(n)
    {
        case 1:{
            int len,bd,ht,p;
            System.out.println("enter the dimension");
            len=sc.nextInt();
            bd=sc.nextInt();
            ht=sc.nextInt();
            Q11 ob = new Q11(); 
            ob.volume(len,bd,ht);
            break;
        }
        case 2:{
        int m;
        System.out.println("enter the dimension");
        m=sc.nextInt();
        Q11 obj = new Q11();
        obj.volume(m);
        break;
        }
    
    
    }
     System.out.println("Do you wish to continue::");
    System.out.println("Enter Y or N");
     c=sc.next().charAt(0);
     }
     while(c=='Y');
    }
    
}
       