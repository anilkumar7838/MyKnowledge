/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Datastructures;

/**
 *
 * @author anil kumar
 */
import java.util.Scanner;
public class Datastr {
    public static void main(String a[]){
        int arr[][]={{0,0,1,1,1,1},
                     {0,0,1,1,1,2},
                     {0,1,1,1,2,2},
                     {1,1,2,3,3,3}};
        
        function(0,3,arr,1,4);
        
        int row=arr.length;
        int column=arr[0].length;
      
       printm(arr,row,column);
    } 
    
    static void printm(int a[][],int r,int c){
    
     for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
              System.out.print(a[i][j]);
          }
          System.out.println();
      }
    }
    static void function(int r, int c, int a[][], int prefill, int postfill){
       int  row=a.length;
       int  column=a[0].length;
     
      if(r<0||c<0||r>=row||c>=column){
          return;
      }
      if(a[r][c]!=prefill){
          return;
      }
      a[r][c]=postfill;
      
      function(r,c-1,a,prefill,postfill);
      function(r-1,c,a,prefill,postfill);
      function(r,c+1,a,prefill,postfill);
      function(r+1,c,a,prefill,postfill);
      
    }
}
