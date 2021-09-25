import java.util.Scanner;
class linearsearch
{
    public static void main( String a[])
    {
        System.out.println("enter the element you want to find");
         Scanner sc=new Scanner(System.in);
         int x= sc.nextInt( );
        int l=a.length;
        for(int i=0;i<l;i++)
        {
            int n=Integer.parseInt(a[i]);
            if(n==x)
            {
                System.out.println("element found at pos " + (i+1));
            }
        }
    }
}