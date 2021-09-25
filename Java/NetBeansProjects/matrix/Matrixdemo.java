

import java.util.Scanner;
class Matrix
int row;
int column;
int a[][];
Matrixdemo()
{
   row = 0; 
   column=0;
}
Matrixdemo (int r,int c)
{        
 row = r;
 column = c;
 a = new int [row][column];

}
Matrixdemo addition (Matrixdemo m)
{
  Matrixdemo temp = new Matrixdemo(m.row,m.column) ;
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

Matrixdemo multiplication (Matrixdemo m)
{
  Matrixdemo temp = new Matrixdemo(m.row,m.column) ;
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
      temp.a[i][j]= 0;
      for(int k=0;k<column;k++)
      {
        temp.a[i][j]=a[i][k]*a[k][j];         
      }
     } 
    }
 }
 return temp;
}
void rotation()
{
    for(int i=0;i<row;i++)
    {
        for(int j=column-1;j>=0;j--)
        {
            System.out.print(a[j][i]+"\t");
            
        }
        System.out.println();
    } 
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

public class Matrixdemo {
    public static void main(String[] args) 
    {
      Scanner sc = new Scanner(System.in); 
      int row,column;
      System.out.println("enter the row");
      row=sc.nextInt();
        System.out.println("enter the column");
        column=sc.nextInt();
        Matrixdemo p;
        Matrix l,n;
        p=new Matrixdemo(row,column);
        p.input();
        l=new Matrixdemo(row,column);
        l.input();
        Matrixdemo m = p.addition(l);
        m.display();
        Matrixdemo s= p.multiplication(l);
        s.display();
        n=new Matrixdemo(row,column);
        n.input();
        n.rotation();
    }
    
}
