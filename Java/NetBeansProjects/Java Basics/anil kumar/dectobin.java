import java.util.Scanner ;
class dtob
{
    public static void main( String args[])
    {
        System.out.println("this program is use to convert decimal to binary");
        System.out.println("enter the decimal number");
        Scanner sc=new Scanner(System.in);
        int n= sc.nextInt();
         int count=0;
        int i=0;
        int num=n;
        while(num!=0)
        {
            num/=2;
             count++ ;
        }
           int b[]=new int[count];
       while(n!=0)
       {
            b[i]= n%2;
             n=n/2;
            i++;
       }
       System.out.println("binary number is" +" ");
       for(int j=i-1;j>=0;j--)
       {
          System.out.print(b[j] +" ");
       }
    }
}