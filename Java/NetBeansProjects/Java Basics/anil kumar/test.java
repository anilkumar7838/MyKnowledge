import java.util.Scanner;
class test
{
  public static void main(String args[])
   {
       int i,sum=0;
        System.out.println("enter the number of term")    
         Scanner sc=new Scanner(System.in);
         int n= sc.nextInt( );
           for(i=1;i<=n;i++)
          {
            sum+=i;
           }    
          System.out.println(sum);
       
   }
}