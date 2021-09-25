/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package assignment;

import java.util.Scanner;

/**
 *
 * @author anil kumar
 */
class complex {

int x;
int y;
complex()
{
   x = 0; 
   y =0;
}
complex (int r,int i)
{        
 x = r;
 y = i;

}
complex addition (complex c)
{
   complex temp=new complex();
   temp.x= x+c.x;
   temp.y=y+c.y;
 return temp;
}

complex multiplication (complex c)
{
 complex temp=new complex();
   temp.x= x*c.x;
   temp.y=y*c.y;
 return temp;  
}
public String toString()
{
    return  ("complex number is:"+x+"+i"+y);
 
 }
};

class complexdemo {
    public static void main(String[] args) 
    {
      Scanner sc = new Scanner(System.in); 
      int real1,real2,imaginary1,imaginary2;
       System.out.println("enter the comlex num 1");
      System.out.println("enter the real part");
      real1=sc.nextInt();
        System.out.println("enter the imaginary part");
        imaginary1 =sc.nextInt();
        complex p,l,n;
        p=new complex(real1,imaginary1);
         System.out.println("enter the complex num 2");
         System.out.println("enter the real part");
      real2=sc.nextInt();
        System.out.println("enter the imaginary part");
        imaginary2 =sc.nextInt();
        l=new complex(real2,imaginary2);
        complex m = p.addition(l);
        System.out.println("after addition "+m);
        complex s= p.multiplication(l);
        System.out.println("after multiplication "+s);
    }
    
}
 

