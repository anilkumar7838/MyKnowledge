import java.util.Scanner;
class matrixm
{
    public static void main (String a[])
    {
        System.out.println("enter the size of row");
        Scanner sc=new Scanner(System.in);
        int m=sc.nextInt( );
        System.out.println("enter the size of column");
        int n=sc.nextInt( );
        System.out.println(m+" "+n);
        int b[][]=new int [m][n];
        int c[][]=new int [m][n];
        int d[][]=new int [m][n];
        System.out.println("enter the elements in matrix 1");
        for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
           {
               b[i][j]=sc.nextInt( );
           } 
        }
        System.out.println("enter the elements in matrix 2");
        for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
           {
               c[i][j]=sc.nextInt( );
           } 
        }
        for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
           {
               d[i][j]=0;
               for(int k=0;k<m;k++)
               {
                   d[i][j]+=b[i][k]*c[k][j];
               }
           } 
        }
        System.out.println("after adding two matrices");
        for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
           {
            System.out.print(d[i][j] + "\t"); 
           } 
           System.out.println( );
        }
    }
}