/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author anil kumar
 */
    class assignment {
     boolean[]b=new boolean[3];
     int count=0;
     void set(boolean[]x,int i)
     {
       x[i]=true;
       ++count;
     }
        public static void main(String args[])
    {
        assignment ob =new assignment();
        ob.set(ob.b,0);
        ob.set(ob.b,2);
        ob.test();
    }
        void test()
        {
          if(b[0]&&b[1]|b[2])
          count++;
          if(b[1]&&b[(++count-2)])
              count+=7;
          System.out.println("count="+count);
        }
}
