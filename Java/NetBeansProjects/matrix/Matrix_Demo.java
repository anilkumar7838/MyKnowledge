/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package matrix;

/**
 *
 * @author user1
 */

import java.util.Scanner;
class Matrix
{
int row;
int column;
int a[][];
Matrix()
{
   row = 0; 
   column=0;
}
Matrix (int r,int c)
{        
 row = r;
 column = c;
 a = new int [row][column];

}
Matrix addition (Matrix m)
{
  Matrix temp = new Matrix(m.row,m.column) ;
    if(row!= m.row||column!= m.column)
 {
     System.out.println("error");
 }
 else
 {
    
    for(int i=0;i<row;i++)
    {
     for(int j=0;j<column;j++)
     {
      temp.a[i][j]= a[i][j]+ m.a[i][j];
     }
    } 
 }
 return temp;
}

Matrix multiplication (Matrix m)
{
  Matrix temp = new Matrix(row,m.column) ;
    if(row!= m.row||column!= m.column)
 {
     System.out.println("error");
 }
 else
 {
    
    for(int i=0;i<row;++i)
    {
     for(int j=0;j<m.column;++j)
     {
      temp.a[i][j]= 0;
      for(int k=0;k<column;++k)
      {
        temp.a[i][j]+=a[i][k]*m.a[k][j];         
      }
     } 
    }
 }
 return temp;
}
void rotation()
{
    Matrix temp;
    for(int i=0;i<row;i++)
    {
        for(int j=column-1;j>=0;j--)
        {
            temp.a[i][j]=a[j][i];
            
        }
     
    } 
    return temp;
}
void input()
{
  Scanner sc = new Scanner(System.in); 
  System.out.println("enter the elements in matrix ");
        for(int i=0;i<row;i++)
        {
           for(int j=0;j<column;j++)
           {
               a[i][j]=sc.nextInt( );
           } 
        }
}
void display()
{
     System.out.println("after peforming operation on two matrices");
        for(int i=0;i<row;i++)
        {
           for(int j=0;j<column;j++)
           {
            System.out.print(a[i][j] + "\t"); 
           } 
           System.out.println( );
        }


 }
}

public class Matrix_demo {
    public static void main(String[] args) 
    {
      Scanner sc = new Scanner(System.in); 
      int row,column;
      System.out.println("enter the row");
      row=sc.nextInt();
        System.out.println("enter the column");
        column=sc.nextInt();
        Matrix p,l,n;
        p=new Matrix(row,column);
        p.input();
        l=new Matrix(row,column);
        l.input();
        Matrix m = p.addition(l);
        m.display();
        Matrix s= p.multiplication(l);
        s.display();
        n=new Matrix(row,column);
        n.input();
        n.rotation();
        n.display();
    }
    
}


