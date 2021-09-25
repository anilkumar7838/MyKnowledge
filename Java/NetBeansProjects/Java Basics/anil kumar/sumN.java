class sumN
{
  public static void main(String args[])
   {
       int i,sum=0;
       int l=args.length;
         if(l==0)
        {
          System.out.println("no arugments passed");
        }
         else
       {
         int n=Integer.parseInt(args[0]);
           for(i=1;i<=n;i++)
          {
            sum+=i;
           }    
          System.out.println(sum);
       }
   }
}