/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package upload;

/**
 *
 * @author anil kumar
 */
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
 class underageException extends Exception{
    private int age;
    underageException()
    {
       age=0;
    }
    underageException(int x)
    {
      age=x;
    }
    public String toString()
   {
     return ("under age "+age);
   }
}
   public class underage
  {
    public static void main(String args[]){

   int t;
  System.out.println("enter the age");
  Scanner sc=new Scanner(System.in);
  t=sc.nextInt();
  //underageException p=new underageException(t);
  test(t);
 }

  static void test(int t)
      {
          try{
          if(t<18)
          throw new underageException(t);
          }
          catch(underageException e)
          {
           System.out.println("caught an exception "+e);
          } 
  }
}




