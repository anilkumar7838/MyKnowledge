
import java.util.Scanner;
class Q7demo {

  
  public static void main(String arg[])
  {
        int sum=0;
      Scanner sc=new Scanner(System.in);
      
       int n=Integer.parseInt(arg[0]);
  
    System.out.println("enter the size through command line argument ");
     int a[]=new int[n];
      System.out.println("enter the elements");
    for(int i=0;i<n;i++)
    {
  
    a[i]=sc.nextInt();
      
   }
     for(int i=0;i<n;i++)
   {
  
       sum+=a[i];
  
   }
        System.out.println("sum = "+ sum);
   }  
}
