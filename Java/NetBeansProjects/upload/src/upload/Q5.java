package upload;
class stackexception {
   private int tos;
   private int stck[]=new int[10];
   stackexception()
   {
     tos=-1;
   }
   void push(int item)throws Exception
   {
     if(tos==9)
         throw new Exception ( "exception stack overflow");
     else
         stck[++tos]=item;
   }
   int pop()throws Exception
   {
     if(tos<0)
     {
        throw new Exception("exception stack underflow");
      
     }
     else
     {
       return stck[tos--];
     }
   
   }
};
class demo
{
  public static void main(String args[])
  { 
          
    stackexception ob1=new stackexception();
    stackexception ob2=new stackexception();
    for(int i=0;i<10;i++)
    {
        try{
      ob1.push(i);
    }
        catch(Exception e){
      System.out.println("caught"+e);
      }
    }
    for(int i=0;i<11;i++)
    {
        try{
      ob2.push(i);
    }
        catch(Exception e){
      System.out.println("caught"+e);
      }
    }
    System.out.println("element in stack1");
    for(int i=0;i<10;i++)
    {
        try{
      System.out.println(ob1.pop());
    }
        catch(Exception e){
      System.out.println("caught"+e);
      }
    }
    System.out.println("element in stack2");
    for(int i=0;i<11;i++)
    {
        try{
      System.out.println(ob2.pop());
    }
        catch(Exception e){
      System.out.println("caught"+e);
      }
    }
      
      
  }
}
