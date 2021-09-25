import java.util.Scanner;
class prime
{
    public static void main(String a[])
    {
        int count=0;
       System.out.println("enter the number ");
        Scanner sc =new Scanner(System.in);
         int n = sc.nextInt( );
        for(int i = n/2;i > 1; i--)
        {
              
            if( n%i==0)
            { 
               count ++ ;
            }
        }
        if( count>0)
        {
             System.out.println("it is not a prime number");
        }
        else
        {
            System.out.println("it is a prime number");
        }
    }
}