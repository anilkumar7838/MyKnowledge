/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package p2;
import p1.TwoDim;
public class ThreeDim extends TwoDim{
    private int z;
    private int i =getx();
    private int j =gety();
    public ThreeDim()
    {
       super();
       z=0;
    }
     public ThreeDim(int r,int i,int z)
    {
       super(r,i);
       this.z=z;
    }
       public String toString()
   {
     return  ("coordinate is:"+" ("+i+" , "+j+" , "+z+" )");
   }
}
