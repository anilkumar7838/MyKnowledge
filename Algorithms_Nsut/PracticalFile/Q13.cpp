/*
    N - Queens problem is to place n - queens in such a manner 
    on an n x n chessboard that no queens attack each other by 
    being in the same row, column or diagonal.
*/

#include<iostream>
using namespace std;

void print_board(int **board, int n) 
{
   for (int i = 0; i < n; i++) 
   {
      for (int j = 0; j < n; j++)
         cout << board[i][j] << " ";
         cout << endl;
   }
}

bool valid(int **board, int row, int col,int n) 
{
   for (int i = 0; i < col; i++) 
      if (board[row][i])
         return false;
   for (int i=row, j=col; i>=0 && j>=0; i--, j--)
      if (board[i][j]) 
         return false;
   for (int i=row, j=col; j>=0 && i<n; i++, j--)
      if (board[i][j]) 
         return false;
   return true;
}
bool solution(int **board, int col,int n) 
{
   if (col >= n) 
      return true;
   for (int i = 0; i < n; i++) 
   { 
      if (valid(board, i, col,n) ) 
      {
         board[i][col] = 1; 
         if ( solution(board, col + 1,n)) 
            return true;
         board[i][col] = 0; 
      }
   }
   return false; 
}


bool check(int n) 
{
   int **board= new int*[n];

   for(int i=0; i<n; i++)
   {
        board[i]=new int[n];
        for(int j=0; j<n; j++)
        {
            board[i][j]=0;
        }
    }
   if ( solution(board, 0,n) == false ) 
   { 
      cout << "Solution does not exist";
      return false;
   }
   print_board(board,n);
   return true;
}

int main()
{
   int n;
   cout<<"\nEnter the number of queens: ";
   cin>>n;
   bool result;
   result=check(n);

   return 0;
}