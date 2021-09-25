//Exception handling use is incomplete
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package newpackage;

/**
 *
 * @author anil kumar
 */
import java.util.Scanner;
class excep
{
  private int x,y;
  excep(int a,int b){
  x=a;
  y=b;
  }
  int sum(){
  return x+y;
  }
  int diff(){
  return x-y;
  }  
  int div()throws Exception{
  return x/y;
  }
  public String toString (){
  return ("Exception:");
  }
}
public class Practice {
    public static void main(String[] args) {
        int a,b;
        System.out.println("enter the 1st number");
        Scanner sc=new Scanner(System.in);
        a=sc.nextInt();
        System.out.println("enter the 2nd number");
        b=sc.nextInt();
        excep e=new excep(a,b);
        try{
        if(e.sum()<0){
        Exception p=new Exception("Negative Number");
        throw p;
        }
        else
        System.out.println("sum is:"+e.sum());
        
        }catch(Exception p){
        System.out.println(p+" "+e.sum());
        System.out.println(e+"Sum is:"+e.sum()+"\n"); 
        }
        try{
        if(e.diff()<0){
        Exception p=new Exception("Negative Number");
        throw p;
        }
        else
        System.out.println("Difference is:"+e.diff());
        
        }catch(Exception p){
        System.out.println(p+" "+e.diff());
        System.out.println(e+"Difference is:"+e.diff()); 
        }
        try{
        // e.div();
        //System.out.println("Division is:"+e.div());
         System.out.println("Division is :"+a/b);
        }catch(ArithmeticException p){
        System.out.println(e+"division by zero");
        }
    }
    
}
