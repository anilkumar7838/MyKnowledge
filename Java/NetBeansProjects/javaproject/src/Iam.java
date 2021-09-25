/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author anil kumar
 */
public class Iam {
    public static void main(String args[]){
    int i=0;
    outer:
    while(true)
    {
        i++;
     inner: 
     for (int j=0; j<10; j++)  
     {    
         i += j;  
         if (j == 3)  
             continue inner;    
         break outer; 
     }      
     continue outer;
    }
    System.out.println(i);
    
    
    }
}
