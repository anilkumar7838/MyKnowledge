/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author user1
 */
 class Q13 {
    static  int sum=0;
     static void argument(int ...v)
    {
      for(int i:v)
       {
         System.out.print(i+" ");
          System.out.println();
          
       }
      System.out.println("number of aruments::"+ v.length);
      for(int j=0;j<v.length;j++)
      {
            sum+=v[j];
      }
          
             System.out.println("sum is" +sum);
             sum=0;
    }
     
    public static void main(String a[])
    {
    
      argument(123);
      argument(1,2,3,4,5);
      argument();
      argument(1,2);
      argument(1,2,3);
    }
    
}
