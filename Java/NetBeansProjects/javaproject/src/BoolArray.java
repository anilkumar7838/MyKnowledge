/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author anil kumar
 */
public class BoolArray {  
boolean [] b = new boolean[3];    int count = 0;
    void set(boolean [] x, int i)     {        x[i] = true;        ++count;    }
    public static void main(String [] args)     {        BoolArray ba = new BoolArray();        ba.set(ba.b, 0);        ba.set(ba.b, 2);        ba.test();
    }    void test()     {        if ( b[0] && b[1] | b[2] )            count++;   System.out.println(b[1]);     if ( b[1] && b[(++count - 2)] )            count += 7;        System.out.println("count = " + count);    } }
