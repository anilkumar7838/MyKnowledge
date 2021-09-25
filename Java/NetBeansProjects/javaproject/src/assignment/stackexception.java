/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package assignment;

/**
 *
 * @author anil kumar
 */
import java.util.Scanner;
public class stackexception {
   private int tos;
   private int stck[];
   int in;
   int out;
   int s;
   stackexception()
   {
     tos=-1;
   }
   stackexception(int x,int y,int size)
   {
      // in=x;
      // out=y;
       s=size;
     stck=new int[size];
   }
   void push(int item)throws Exception
   {
     if(tos==s)
         throw new Exception ( "exception stack overflow");
     else
         stck[++tos]=item;
   }
   int pop()throws Exception
   {
     if(tos<0)
     {
        throw new Exception("exception stack underflow");
      
     }
     else
     {
       return stck[tos--];
     }
   
   }
};
class demo
{
  public static void main(String args[])
  { 
       Scanner sc=new Scanner(System.in);
       System.out.println("enter the size:");
        int size=sc.nextInt();
        System.out.println("enter the number of element you want to push:");
        int x=sc.nextInt();
        System.out.println("enter the number of element you want to pop:");
        int y=sc.nextInt();
        stackexception ob1=new stackexception(x,y,size);
   // stackexception ob2=new stackexception();
   System.out.println("enter the element:");
    for(int i=0;i<x;i++)
    {
        int s=sc.nextInt();
        try{
      ob1.push(s);
    }
        catch(Exception e){
      System.out.println("caught"+e);
      }
    }
 //   for(int i=0;i<n;i++)
   // {
     //   try{
     // ob2.push(i);
    //}
      //  catch(Exception e){
     // System.out.println("caught"+e);
     // }
   // }
    System.out.println("element in stack1");
    for(int i=0;i<y;i++)
    {
        try{
      System.out.println(ob1.pop());
    }
        catch(Exception e){
      System.out.println("caught"+e);
      }
    }
//    System.out.println("element in stack2");
//    for(int i=0;i<11;i++)
//    {
//        try{
//      System.out.println(ob2.pop());
//    }
//        catch(Exception e){
//      System.out.println("caught"+e);
//      }
//    }
      
      
  }
}