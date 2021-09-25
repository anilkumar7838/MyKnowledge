// Class Matrix with Exception Handling

#include<iostream>   
using namespace std;
class Matrix
{
	int r1,c1,r2,c2;
	int a[10][10],b[10][10];
 	public:
	Matrix()
	{
		r1=0;
		c1=0;
		r2=0;
		c2=0;
	}
	void input();
	void sum();
	void product();
	void transpose();
};

 void Matrix::input()
 {
 	cout<<"\n Enter size of first matrix:"<<"\n";
 	cin>>r1>>c1;
 	cout<<"Enter elements of matrix:\n";
 	for(int i=0;i<r1;i++)
 	{
 		for(int j=0;j<c1;j++)
 		{
 			cin>>a[i][j];		 
 		}
	}
 	cout<<"\nEnter size of second matrix:"<<"\n";
 	cin>>r2>>c2;
 	cout<<"Enter elements of second matrix:\n";
 	for(int i=0;i<r2;i++)
 	{
 		for(int j=0;j<c2;j++)
 		{
 			cin>>b[i][j];
	 	}
	}
 }
 
 void Matrix::sum()
 {	
 	try
 	{
 		if(r1==r2 && c1==c2)
 		{
 			cout<<"\n Sum of two matrices is : "<<"\n";
		 	int c[10][10];
		 	for(int i=0; i<r1; i++)
		 	{
		 		for(int j=0;j<c1;j++)
		 		{
		    		c[i][j]=a[i][j]+b[i][j];
		    	}
			}
			 
			for(int i=0; i<r1; i++)
		 	{
		 		for(int j=0;j<c1;j++)
		 		{
		    		cout<<c[i][j]<<" ";
		    	}
		    	cout<<"\n";
			}
			
		}
		else
		{
 		  throw "not possible ";
 		}

 	}
 	catch ( const char *str)
       {
	   cout<<"\n"<<" Sum of the matrices is "<<str;
	   }
 }
 
 void Matrix::product()
	{
 
		try
		{
			if(c1!=r2)
			 throw "not possible ";
			else
				{
					int c[10][10];
					for(int i=0; i<r1 ; i++){
						for(int j=0;j<c2;j++){
							int sum=0;
							for(int k=0;k<r2;k++)
							{
								sum=sum+a[i][k]*b[k][j];
							}
							c[i][j]=sum;
						}
					}
					cout<<"\n Product of matrices is:"<<"\n";
					for(int m=0;m<r1;m++)
					{
						for(int n=0;n<c2;n++)
						{
							cout<<c[m][n]<<" ";
						}
						cout<<"\n";
					}
				}		
		} 
		
		catch( const char* str)
		{
			cout<<"\n Product of the matrices is "<<str;
		}
  
 
 	}
 
 void Matrix::transpose()
 {
 	cout<<"ORIGINAL MATRICE IS:\n";
 	for(int i=0;i<r1;i++)
 	{
 		for( int j=0;j<c1;j++)
 		{
 			cout<<a[i][j]<<" ";
	    }
	    cout<<"\n";
	}
	cout<<"\n TRANSPOSE OF MATRICE IS:\n";
	for(int j=0;j<c1;j++)
	{
	 	for(int i=0;i<r1;i++)
	 	{
	 		cout<<a[i][j]<<" ";
	 	}
	 	cout<<"\n";
	}
 }

int main()
{   Matrix m;
   	int n;
   	char ch;
   	do{
   	    cout<<"\n\t\t\t***   Main Menu   ***"
   	    	<<"\n\t\t\t 1.Sum"
   	    	<<"\n\t\t\t 2.Product"
   	    	<<"\n\t\t\t 3.Transpose";
   	    cout<<"\n\t\t\t Enter choice(1-3):";
		cin>>n;
	switch(n)
	{
		case 1: 	m.input();
					m.sum();
					break;
		case 2: 	m.input();
					m.product();
					break;
		case 3: 	m.input();
					m.transpose();
					break;
		default:	cout<<"Wrong Choice!!\n";
		        	break;
		
	}   
	cout<<"\n Do you wish to continue(y/n):";
	cin>>ch;
   }while(ch=='Y'||ch=='y');	
   return 0;
}
 
