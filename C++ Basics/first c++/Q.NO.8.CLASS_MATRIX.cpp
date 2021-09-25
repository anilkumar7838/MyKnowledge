                                  
/*this program is used to check whether a number is of fibonacci family or not
        by Anil kumar
        course Bsc.(H) computer science
        Roll no.-19HCS4068 */

#include<iostream>
using namespace std;
class matrix
{
	public:
		int print(int ar[100][100],int row,int col)
		{
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
					cout<<ar[i][j]<<"   ";
				cout<<endl;
			}
			return 0;
		}
		void sum_matrix()
		{   int row,col;
			cout<<" ENTER NO OF ROWS : ";
			cin>>row;
			cout<<endl;
			cout<<" ENTER COLUMNS : ";
			cin>>col;
			int ar1[100][100],ar2[100][100],sumar[100][100];
			cout<<" TOTAL ELEMENTS : "<<row*col;
			cout<<" ENTER ARRAY 1st :"<<endl;
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				cin>>ar1[i][j];
			}
			cout<<" ENTER ARRAY 2nd : "<<endl;
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				cin>>ar2[i][j];
			}
			cout<<" sum of both matrix is : "<<endl;
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				sumar[i][j]=ar1[i][j]+ar2[i][j];
			}
			print(sumar,row,col);
		}
		void product_matrix()
		{
			 int row,col;
			cout<<" ENTER NO OF ROWS : ";
			cin>>row;
			cout<<endl;
			cout<<" ENTER COLUMNS : ";
			cin>>col;
			int ar1[100][100],ar2[100][100],proar[100][100];
			cout<<" TOTAL ELEMENTS : "<<row*col;
			cout<<" ENTER ARRAY 1st :"<<endl;
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				cin>>ar1[i][j];
			}
			cout<<" ENTER ARRAY 2nd : "<<endl;
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				cin>>ar2[i][j];
			}
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				proar[i][j]+=ar1[i][j]*ar2[i][j];
			}
			print(proar,row,col);
		}
		void transpose()
		{
			
			int row,col;
			cout<<" ENTER NO OF ROWS : ";
			cin>>row;
			cout<<endl;
			cout<<" ENTER COLUMNS : ";
			cin>>col;
			int ar1[100][100],tar[100][100];
			cout<<" TOTAL ELEMENTS : "<<row*col;
			cout<<" ENTER ARRAY 1st :"<<endl;
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				cin>>ar1[i][j];
			}
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				tar[i][j]=ar1[j][i];
			}
			print(tar,row,col);
		}
};
int main()
{
	int choice;
	matrix m1;
	cout<<" ENTER 1 TO DO ADD OF TWO MATRIX : "<<endl;
	cout<<" ENTER 2 FOR MULTIPLICATION :  "<<endl;
	cout<<" ENTER 3 FOR TRANSPOSE OF MATRIX :"<<endl;
	cout<<" ENTER YOUR CHOICE :";
	cin>>choice;
	cout<<endl;
	if(choice==1)
	m1.sum_matrix();
	else if(choice==2)
	m1.product_matrix();
	else if(choice==3)
	m1.transpose();
	else
	cout<<" :::::::::: WRONG CHOICE ENTER AGAIN ::::::::::";
	return 0;
}
