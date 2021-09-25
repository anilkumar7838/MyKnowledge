/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author anil kumar
 */
public abstract class AbstractTest {    public int getNum()     {        return 45;    }    public abstract class Bar     {        public int getNum() 
       {            return 38;        }    }    public static void main (String [] args)     {        AbstractTest t = new AbstractTest()         {            public int getNum()             {                return 22;            }        };        AbstractTest.Bar f = t.new Bar()         {            public int getNum()             {               return 57;           }       };              System.out.println(f.getNum() + " " + t.getNum());   } }