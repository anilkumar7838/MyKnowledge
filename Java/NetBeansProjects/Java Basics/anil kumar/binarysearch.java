import java.util.Scanner;
class binarysearch
{
    public static void main( String a[])
    {
        int i=0;
        System.out.println("enter the size ");
        Scanner sc =new Scanner(System.in);
         int n = sc.nextInt( );
          int b[]=new int[n]; 
        System.out.println("enter the elements ");
        for(int k=0;k<n;k++) 
        {
            b[k]=sc.nextInt( );
        }
        
        for(int j=0;j<n-1;j++)
        {
           if(b[j]>b[j+1])
           {
               int temp= b[j];
               b[j]= b[j+1];
               b[j+1]=temp;
           } 
        }
        int last = n-1;
        int mid = (i+last)/2;
        System.out.println("enter the element you want to find");
         int x = sc.nextInt( );
      
        while(i <= last)
        {
            if(b[mid] < x)
            {
                i = mid+1;
            }
            else if(b[mid] == x)
            {
                System.out.println("element found at pos " + (mid+1));
                break;
            }
            else
           {
               last = mid-1;
           }
            mid=(i+last)/2;
        }
        if(i > last)
        {
            {
                System.out.println("element not found ");
            }
        }
    }
}