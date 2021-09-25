/*
Q12: Rewrite Matrix class of Q8 with exception handling. Exceptions should be thrown by the
 functions if matrices passed to them are incompatible 
 and handled by main() function.
*/
#include<iostream>  
using namespace std;

class matrix
{
	int r1,c1,r2,c2;
	int A[10][10],B[10][10];
 public:
	matrix()
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
}m;

int main()
{
   int n;
   char ch;
   do{
   	    cout<<"\n Main Menu "
   	    	<<"\n 1. input "
   	    	<<"\n 2. sum "
   	    	<<"\n 3. product "
   	    	<<"\n 4. transpose ";
   	    cout<<"\n enter choice ";
		cin>>n;
	switch(n)
	{
		case 1: m.input();
				break;
		case 2: m.sum();
				break;
		case 3: m.product();
				break;
		case 4: m.transpose();
		        break;
		
	   }   
	   
	   cout<<"\n Do you wish to continue ";
	   cin>>ch;
   }while(ch=='Y'||ch=='y');	
   return 0;
}

 void matrix::input(){
 	cout<<"\n Enter row and column of matrix A "<<endl;
 	cin>>r1>>c1;
 	cout<<"\nEnter matrix A elements: ";
 	for(int i=0;i<r1;i++)
 	{
 		for(int j=0;j<c1;j++)
 			cin>>A[i][j];		 
	 }
 	cout<<"\n Enter row and column of matrix B "<<endl;
 	cin>>r2>>c2;
 	cout<<"\nEnter matrix B elements: ";
 	for(int i=0;i<r2;i++)
 	{
 		for(int j=0;j<c2;j++)
 			cin>>B[i][j];		 
	 }
 }
 
 void matrix::sum(){
 	
 	try
 	{
 		if(r1!=r2 && c1!=c2)
 		  throw " Invalid ";
 		else 
 		{       cout<<"\n Sum of two matrices is : "<<endl;
		 			int C[10][10];
		 	for(int i=0; i<r1; i++)
		 	{
		 		for(int j=0;j<c2;j++)
		    		C[i][j]=A[i][j]+B[i][j];
			 }
			 
			 	for(int i=0; i<r1; i++,cout<<endl)
		 	{
		 		for(int j=0;j<c2;j++)
		    		cout<<C[i][j]<<" ";
			 }
			
		}
	}
 	
 	catch ( const char *str)
       {
	   cout<<endl<<" Sum of the matrices is : "<<str;  }
 }
 
 void matrix::product()
	{
 
		try
		{
			if(c1!=r2)
			 throw " INVALID ";
			else
				{
					int C[10][10];
					for(int i=0; i<r1 ; i++){
						for(int j=0;j<c2;j++){
							int sum=0;
							for(int k=0;k<r2;k++)
							{
								sum=sum+A[i][k]*B[k][j];
							}
							C[i][j]=sum;
						}
					}
					cout<<"\n Product of matrices is : "<<endl;         
					for(int m=0;m<r1;m++,cout<<endl)
					{
						for(int n=0;n<c2;n++)
						cout<<C[m][n]<<" ";
					}
				}		
		} 
		
		catch( const char* str)
		{
			cout<<"\n Product of the matrices is "<<str;
		}
  
 
 	}
 
 void matrix::transpose(){
 	int trans[10][10];
 	for(int i=0;i<r1;i++)
 	{
 		for( int j=0;j<c1;j++)
 		trans[j][i]=A[i][j];
	 }
	 cout<<"\n Transpose of matrix ";
	 for(int i=0;i<c1;i++)
	 {
	 	for(int j=0;j<r1; j++)
	 	cout<<trans[i][j]<<" ";
	 	cout<<endl;
	 }
 }
 
