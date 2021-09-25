class arraysum
{
    public static void main( String args[])
    {
        int sum=0;
        int l=args.length;
        for(int i=0;i<l;i++)
        {
           int n=Integer.parseInt(args[i]);
           sum+=n;
        }   
        System.out.println(sum);
    }
}