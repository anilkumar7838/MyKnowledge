// Menu-driven with Class

#include<iostream>
using namespace std ;
class Matrix
{   
 	private:
    int a[10][10],b[10][10],r1,r2,c1,c2;
	public :
	matrix()
	{
		r1=0;
		r2=0;
		c1=0;
		c2=0;
	}
	void input();
	void sum ();
	void mul();
	void transpose();
};
void Matrix::input()
{   int i,j;
	cout<<"Enter size of first matrix:"<<"\n";
	cin>>r1>>c1;
	cout<<"Enter size of second matrix:"<<"\n";
    cin>>r2>>c2;
    cout<<"Enter elements of first matrix:"<<"\n";
    for(i=0;i<r1;i++)
    {
    	for(j=0;j<c1;j++)
    	{
    		cin>>a[i][j];
		}
	} 
	cout<<"Enter elements of second matrix:"<<"\n";
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			cin>>b[i][j];
		}
	}
}
void Matrix::sum()
{   
    int i,j,c[10][10];
 	if(r1==r2 && c1==c2)
 	{  
 		for(i=0;i<r1;i++)
 		{
 			for(j=0;j<c1;j++)
 			{
 				c[i][j]=a[i][j]+b[i][j];
			}
		}
		cout<<"ADDITION OF MATRICES:\n";
		for(i=0;i<r2;i++)
 		{
 			for(j=0;j<c2;j++)
 			{
 				cout<<c[i][j]<<" ";
			}
			cout<<"\n";
	    }
    }
	    else 
	    {
	    	cout<<"MARICES CAN'T BE ADDED!!";
		}
}			
void Matrix::mul()
{   
	int c[10][10],i,j,k,p;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			c[i][j]=0;
		}
	}
	if(r2==c1)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{   p=0;
				for(k=0;k<c1;k++)
				{
					p+=a[i][k]*b[k][j];
				}
				c[i][j]=p;
			}
		}
		cout<<"Multiplication of Matrices:"<<"\n";
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				cout<<c[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	else 
	{
		cout<<"Matrices can't be multiply!!";
	}
	
}
void Matrix::transpose()
{   
    int i,j;
    cout<<"Original first matrix:"<<"\n";
    for(i=0;i<r1;i++)
 	{
 		for(j=0;j<c1;j++)
 		{
 			cout<<a[i][j]<<" ";
		}
		 cout<<"\n";
	}
	cout<<"Transpose of first matrix:"<<"\n";
	for(j=0;j<c1;j++)
 	{
 		for(i=0;i<r1;i++)
 		{
 			cout<<a[i][j]<<" ";
		}
		 cout<<"\n";
	}
	cout<<"Original second matrix:"<<"\n";
	for(i=0;i<r2;i++)
 	{
 		for(j=0;j<c2;j++)
 		{
 			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"Transpose of second matrix:"<<"\n";
	for(j=0;j<c2;j++)
 	{
 		for(i=0;i<r2;i++)
 		{
 			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main()
{
	Matrix m;
    char ch;
    int  n;
    do{
   	    cout<<"\t\t\t***   Menu   ***"
   	    	<<"\n\t\t\t 1.Sum"
   	    	<<"\n\t\t\t 2.Product"
   	    	<<"\n\t\t\t 3.Transpose";
   	    cout<<"\n\t\t\t Enter your choice(1-3):";
		cin>>n;
	switch(n)
	{
		case 1: m.input();
		        m.sum();
				break;
		case 2: m.input();
				m.mul();
				break;
		case 3: m.input();
				m.transpose();
		        break;
		default:cout<<"invalid choice";
		        break;
	}
	cout<<"\n Do you wish to continue(y/n):";
	cin>>ch;
   }while(ch=='Y'||ch=='y');	
   return 0;
}
