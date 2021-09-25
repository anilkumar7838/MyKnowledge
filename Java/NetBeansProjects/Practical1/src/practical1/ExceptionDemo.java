/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practical1;

/**
 *
 * @author anil kumar
 */
import java.util.Scanner;
 class OverWeight extends Exception{
    private int weight;
    OverWeight()
    {
       weight=0;
    }
    OverWeight(int x)
    {
      weight=x;
    }
    public String toString()
   {
     return ("Over Weight:"+weight);
   }
}
   public class ExceptionDemo
  {
    public static void main(String args[]){

   int t;
  System.out.println("enter the your weight");
  Scanner sc=new Scanner(System.in);
  t=sc.nextInt();
  
  test(t);
 }

  static void test(int t)
      {
          try{
          if(t>90)
          throw new OverWeight(t);
          else
          System.out.println("Your Weight is:"+t);   
          }
          catch(OverWeight e)
          {
           System.out.println("caught an exception "+e);
          } 
  }
}

