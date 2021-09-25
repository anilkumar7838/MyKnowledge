/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author anil kumar
 */
public class a {
    a()
    {
       System.out.println("a");
    }
}
 class b extends a {
    b()
    {
       System.out.println("b");
    }
}
class c extends b {
    c()
    {
       System.out.println("c");
    }
}
class demo
{
  public static void main(String args[]){
   c ob=new c();
  
  }


}
