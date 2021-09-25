class fact
{
  public static void main(String args[])
   {
       int i,f=1;
     int n=Integer.parseInt(args[0]);
     for(i=n;i>0;i--)
     {
       f=(f*i);
     }    
     System.out.println(f);
   }
}