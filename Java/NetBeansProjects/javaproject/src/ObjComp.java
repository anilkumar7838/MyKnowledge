/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author anil kumar
 */
public class ObjComp 
{    public static void main(String [] args )     {        int result = 0;        ObjComp oc = new ObjComp();        Object o = oc;
       if (o == oc)              result = 1;        if (o != oc)              result = result + 10;        if (o.equals(oc) )              result = result + 100;        if (oc.equals(o) )              result = result + 1000;
        System.out.println("result = " + result);    } }

