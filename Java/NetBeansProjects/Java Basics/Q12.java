/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author user1
 */

class Specifiers 
{
    public int x;
    private int y;
    final double pi=3.14;
    void get_x(int a)
    {
        System.out.println("X can also be initialized by member functions.");
        x=a;
       
    }
    void get_y(int b)
    {
        System.out.println("Y can only be initialized by member functions.");
        y=b;
       
    }
    void display_x()
    {
        System.out.println("The value of x is::"+x);
        
       
    }
     void display_y()
     {
        System.out.println("The value of y is::"+y);
        
        
    }
    
    void area()
    {
        System.out.print("Area of the cirle is::");
        double area=pi*x*x;
        System.out.println(area);
        //pi++(not possible because pi is final)
        
        
    }
    
   
}

class Q12
{
    public static void main(String args[])
    {        
      Specifiers A=new Specifiers();
      A.x=100;
      //a.y=200;(not possible because y is private data member)
      System.out.println("X can be initialized without member functions or constructors.");
      A.display_x();
      A.get_x(100);
      A.display_x();
      A.area();
      A.get_y(200);
      A.display_y();
    
    }
    
   
}