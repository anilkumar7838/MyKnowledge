// Menu-Diven program
#include<iostream>
using namespace std;
int r1,r2,c1,c2;
void addition(int a[][10],int b[][10]);
void subtraction(int a[][10],int b[][10]);
void division(int a[][10],int b[][10]);
void enter_row_major(int a[][10])
{
	cout<<"Enter size of matrix";
	cin>>r1>>c1;
	cout<<"Enter elements of matrix:";
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cin>>a[i][j];
		}
	}
}
void enter_column_major(int a[][10])
{
	int i,j;
	cout<<"Enter size of matrix:";
	cin>>r1>>c1;
	cout<<"Enter elements of matrix:";
	for(j=0;j<c1;j++)
	{
		for(i=0;i<r1;i++)
		{
			cin>>a[i][j];
		}
	}
}
void enter_2row_major(int a[][10],int b[][10])
{   
    int i,j;
	cout<<"Enter size of first matrix:";
	cin>>r1>>c1;
	cout<<"Enter elements of first matrix:";
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter size of second matrix";
	cin>>r2>>c2;
	cout<<"Enter elements of second matrix:";
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cin>>b[i][j];
		}
	}	
}
void enter_2column_major(int a[][10],int b[][10])
{
	int i,j;
	cout<<"Enter size of first matrix:";
	cin>>r1>>c1;
	cout<<"Enter elements of first matrix:";
	for(j=0;j<c1;j++)
	{
		for(i=0;i<r1;i++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter size of second matrix:";
	cin>>r2>>c2;
	cout<<"Enter elements of second matrix:";
	for(j=0;j<c2;j++)
	{
		for(i=0;i<r2;i++)
		{
			cin>>b[i][j];
		}
	}

}                 
void print_row_major(int a[][10])
{   
    int i,j,ch,flag=0;  
    for(i=0;i<1;i++)
    {
    	for(j=0;j<1;j++)
    	{
    		if(a[i][j]==0)
    		{
    			flag++;
			}
		}
	}
	if(flag!=0)
	{
		cout<<"FIRST ENTER MATRIX PLEASE!!\n";
		cout<<"Enter your choice to enter matrix\n"
		    <<"1.Row-major wise\n"
		    <<"2.Column-major wise\n";
		cin>>ch;
		if(ch==1)
		{
			enter_row_major(a);
		}
		else if(ch==2)
		{
			enter_column_major(a);
		}
		else
		{
			cout<<"WRONG CHOICE!!\n";
			cout<<"NULL ";
		}
    }   
	cout<<"Matrix is:"<<"\n";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
void print_column_major(int a[][10])
{
	int i,j,ch,flag=0;  
    for(i=0;i<1;i++)
    {
    	for(j=0;j<1;j++)
    	{
    		if(a[i][j]==0)
    		{
    			flag++;
			}
		}
	}
	if(flag!=0)
	{
		cout<<"FIRST ENTER MATRIX PLEASE!!\n";
		cout<<"Enter your choice to enter matrix\n"
		    <<"1.Row-major wise\n"
		    <<"2.Column-major wise\n";
		cin>>ch;
		if(ch==1)
		{
			enter_row_major(a);
		}
		else if(ch==2)
		{
			enter_column_major(a);
		}
		else
		{
			cout<<"WRONG CHOICE!!\n";
			cout<<"NULL ";
		}
    }
	cout<<"Matrix is:\n";
	for(j=0;j<r1;j++)
	{
		for(i=0;i<c1;i++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int sum_all(int a[][10])
{   
    int i,j,ch,flag=0,sum=0;  
    for(i=0;i<1;i++)
    {
    	for(j=0;j<1;j++)
    	{
    		if(a[i][j]==0)
    		{
    			flag++;
			}
		}
	}
	if(flag!=0)
	{
		cout<<"FIRST ENTER MATRIX PLEASE!!\n";
		cout<<"Enter your choice to enter matrix\n"
		    <<"1.Row-major wise\n"
		    <<"2.Column-major wise\n";
		cin>>ch;
		if(ch==1)
		{
			enter_row_major(a);
		}
		else if(ch==2)
		{
			enter_column_major(a);
		}
		else
		{
			cout<<"WRONG CHOICE!!\n";
		}
	}
	                      
	  for(i=0;i<r1;i++)
	  {
		 for(j=0;j<c1;j++)
		 {
			 sum+=a[i][j];
		 }
	   }
	  return sum;
}
int diag_sum(int a[][10])
{
	int i,j,ch,flag=0,sum=0;  
    for(i=0;i<1;i++)
    {
    	for(j=0;j<1;j++)
    	{
    		if(a[i][j]==0)
    		{
    			flag++;
			}
		}
	}
	if(flag!=0)
	{
		cout<<"FIRST ENTER MATRIX PLEASE!!\n";
		cout<<"Enter your choice to enter matrix\n"
		    <<"1.Row-major wise\n"
		    <<"2.Column-major wise\n";
		cin>>ch;
		if(ch==1)
		{
			enter_row_major(a);
		}
		else if(ch==2)
		{
			enter_column_major(a);
		}
		else
		{
			cout<<"WRONG CHOICE!!\n";
			
		}
    }
	   for(i=0;i<r1;i++)
	   {
		 for(j=0;j<c1;j++)
		 {
			if(i==j)
			{
			   sum+=a[i][j];
		     }
		 }    
	    }
	   return sum;
}
int non_diag_sum(int a[][10])
{
	int i,j,ch,flag=0,sum=0;  
    for(i=0;i<1;i++)
    {
    	for(j=0;j<1;j++)
    	{
    		if(a[i][j]==0)
    		{
    			flag++;
			}
		}
	}
	if(flag!=0)
	{
		cout<<"FIRST ENTER MATRIX PLEASE!!\n";
		cout<<"Enter your choice to enter matrix\n"
		    <<"1.Row-major wise\n"
		    <<"2.Column-major wise\n";
		cin>>ch;
		if(ch==1)
		{
			enter_row_major(a);
		}
		else if(ch==2)
		{
			enter_column_major(a);
		}
		else
		{
			cout<<"WRONG CHOICE!!\n";
		}
    }
	   for(i=0;i<r1;i++)
	   {
		 for(j=0;j<c1;j++)
		 {
			if(i!=j)
			{
				
			   sum+=a[i][j];
		     }
		 }    
	    }
	   return sum;
} 
int sum_upper(int a[][10])
{
	int i,j,ch,flag=0,sum=0;  
    for(i=0;i<1;i++)
    {
    	for(j=0;j<1;j++)
    	{
    		if(a[i][j]==0)
    		{
    			flag++;
			}
		}
	}
	if(flag!=0)
	{
		cout<<"FIRST ENTER MATRIX PLEASE!!\n";
		cout<<"Enter your choice to enter matrix\n"
		    <<"1.Row-major wise\n"
		    <<"2.Column-major wise\n";
		cin>>ch;
		if(ch==1)
		{
			enter_row_major(a);
		}
		else if(ch==2)
		{
			enter_column_major(a);
		}
		else
		{
			cout<<"WRONG CHOICE!!\n";
		}
    }
	   for(i=0;i<r1;i++)
	   {
		 for(j=0;j<c1;j++)
		 {
			if(i<=j)
			{
			   sum+=a[i][j];
		     }
		 }    
	    }
	   return sum;
}
int sum_lower(int a[][10])
{
	int i,j,ch,flag=0,sum=0;  
    for(i=0;i<1;i++)
    {
    	for(j=0;j<1;j++)
    	{
    		if(a[i][j]==0)
    		{
    			flag++;
			}
		}
	}
	if(flag!=0)
	{
		cout<<"FIRST ENTER MATRIX PLEASE!!\n";
		cout<<"Enter your choice to enter matrix\n"
		    <<"1.Row-major wise\n"
		    <<"2.Column-major wise\n";
		cin>>ch;
		if(ch==1)
		{
			enter_row_major(a);
		}
		else if(ch==2)
		{
			enter_column_major(a);
		}
		else
		{
			cout<<"WRONG CHOICE!!\n";
		}
    }
	   for(i=0;i<r1;i++)
	   {
		 for(j=0;j<c1;j++)
		 {
			if(i>=j)
			{
			   sum+=a[i][j];
		     }
		 }    
	    }
	   return sum;
}
void sum_row_column(int a[][10])
{
	int i,j,ch,sum=0,flag=0;  
    for(i=0;i<1;i++)
    {
    	for(j=0;j<1;j++)
    	{
    		if(a[i][j]==0)
    		{
    			flag++;
			}
		}
	}
	if(flag!=0)
	{
		cout<<"FIRST ENTER MATRIX PLEASE!!\n";
		cout<<"Enter your choice to enter matrix\n"
		    <<"1.Row-major wise\n"
		    <<"2.Column-major wise\n";
		cin>>ch;
		if(ch==1)
		{
			enter_row_major(a);
		}
		else if(ch==2)
		{
			enter_column_major(a);
		}
		else
		{
			cout<<"WRONG CHOICE!!\n";
		}
    }
    cout<<"Sum of Rows...";
    cout<<"\n";
    for(i=0;i<r1;i++)
    {
    	sum=0;
    	for(j=0;j<c1;j++)
    	{
    		sum=sum+a[i][j];
		}
		cout<<"Sum of "<<(i+1)<<" row is:"<<sum<<"\n";
	}
	cout<<"Sum of Columns...";
	cout<<"\n";
	for(j=0;j<c1;j++)
	{   
	    sum=0;
		for(i=0;i<r1;i++)
		{
			sum=sum+a[i][j];
		}
		cout<<"Sum of "<<(j+1)<<" column is:"<<sum<<"\n";
    }
}
void transpose(int a[][10])
{
	int i,j,ch,flag=0;  
    for(i=0;i<1;i++)
    {
    	for(j=0;j<1;j++)
    	{
    		if(a[i][j]==0)
    		{
    			flag++;
			}
		}
	}
	if(flag!=0)
	{
		cout<<"FIRST ENTER MATRIX PLEASE!!\n";
		cout<<"Enter your choice to enter matrix\n"
		    <<"1.Row-major wise\n"
		    <<"2.Column-major wise\n";
		cin>>ch;
		if(ch==1)
		{
			enter_row_major(a);
			print_row_major(a);
		}
		else if(ch==2)
		{
			enter_column_major(a);
			print_row_major(a);
		}
		else
		{
			cout<<"WRONG CHOICE!!\n";
			cout<<"Can't Print ";
		}
    }
    cout<<"Transpose of a matrix:\n";
    for(j=0;j<c1;j++)
    {
    	for(i=0;i<r1;i++)
    	{
    		cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}	
}
void  print_sum(int sum)
{
	cout<<"Required sum is:"<<sum;
	cout<<"\n";
}
void operations(int a[][10],int b[][10])
{
	int i,j,ch,flag=0;  
    for(i=0;i<1;i++)
    {
    	for(j=0;j<1;j++)
    	{
    		if(a[i][j]==0 ||b[i][j]==0 )
    		{
    			flag++;
			}
		}
	}
	if(flag!=0)
	{
		cout<<"FIRST ENTER MATRICES PLEASE!!\n";
		cout<<"Enter your choice to enter matrix\n"
		    <<"1.Row-major wise\n"
		    <<"2.Column-major wise\n";
		cin>>ch;
		if(ch==1)
		{
			enter_2row_major(a,b);
		}
		else if(ch==2)
		{
			enter_2column_major(a,b);
		}
		else
		{
			cout<<"WRONG CHOICE!!\n";
			cout<<"Can't perform \n";
		}
    }
	if(r1==r2 && c1==c2)
	{
		addition(a,b);
		subtraction(a,b);
		division(a,b);
	}
	else
	{
		cout<<"Matrices operations cannot perform as sizes of matrices are not equal...\n";
	}
}    
void addition(int a[][10],int b[][10])
{
	int i,j,c[10][10];
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"Addition of two matrices\n";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
}
void subtraction(int a[][10],int b[][10])
{
	int i,j,c[10][10];
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	cout<<"Subtraction of two matrices\n";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
}
void division(int a[][10],int b[][10])
{
	int i,j,c[10][10];
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			if(b[i][j]==0)
			c[i][j]=-100;
			else
			c[i][j]=a[i][j]/b[i][j];
		}
	}
	cout<<"Division of two matrices\n";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main()
{
	int a[10][10],b[10][10],i,j,n,sum;
	char choice;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			a[i][j]=0;
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			b[i][j]=0;
		}
	}
	do
	   { 
	    cout<<"\n\n"; 
	   	cout<<"\t\t\t************     MENU     ************"<<"\n\n";
	   	cout<<"\t\t\t1.ENTER MATRIX ROW-MAJOR WISE"<<"\n"
	   	    <<"\t\t\t2.ENTER MATRIX COLUMN-MAJOR WISE"<<"\n"
	   	    <<"\t\t\t3.PRINT MATRIX ROW-MAJOR WISE"<<"\n"
	   	    <<"\t\t\t4.PRINT MATRIX COLUMN-MAJOR WISE"<<"\n"
	   	    <<"\t\t\t5.SUM OF ALL ELEMENTS OF 2-D ARRAY"<<"\n"
	   	    <<"\t\t\t6.SUM OF DIAGONAL ELEMENTS OF 2-D ARRAY"<<"\n"
	   	    <<"\t\t\t7.SUM OF NON-DIAGONAL ELEMENTS OF 2-D ARRAY"<<"\n"
	   	    <<"\t\t\t8.SUM OF UPPER-TRIANGLE ELEMENTS OF 2-D ARRAY"<<"\n"
	   	    <<"\t\t\t9.SUM OF LOWER-TRIANGLE ELEMENTS OF 2-D ARRAY"<<"\n"
	   	    <<"\t\t\t10.SUM OF EACH ROW AND COLUMN OF 2-D ARRAY"<<"\n"
	   	    <<"\t\t\t11.PRINT TRANSPOSE OF A MATRIX"<<"\n"
	   	    <<"\t\t\t12.ADDITION,SUBTRACTION AND DIVISION OF TWO MATRICES"<<"\n"
	   	    <<"\t\t\tEnter your choice(1-12):";
	   	  cin>>n;
	     
	   	sum=0;
	   	
	   	switch(n)
	   	{
	   		case 1:   	enter_row_major(a);
			          	break;
			case 2:	  	enter_column_major(a);
			          	break;
			case 3:   	print_row_major(a);
			          	break;
			case 4:	  	print_column_major(a);
			          	break;	  
			case 5:   	sum=sum_all(a);  			
			          	print_sum(sum);			
					  	break; 
			case 6:	  	sum=diag_sum(a);
			          	print_sum(sum);
			          	break;
			case 7:	  	sum=non_diag_sum(a);
			          	print_sum(sum);
					  	break;
			case 8:	  	sum=sum_upper(a);
			          	print_sum(sum);
					  	break;
			case 9:		sum=sum_lower(a);
			  	    	print_sum(sum);
						break;
			case 10:	sum_row_column(a);
			            break;		    
			case 11:	transpose(a);
			   			break;
			case 12:	operations(a,b);
						break;		   			         
			default:  cout<<"Wrong Choice!!\n";
			          break;		  	        
		}
	 cout<<"Do you want to continue(y/n):";
	 cin>>choice;
    }while(choice=='y' || choice=='Y');
	return 0;
}

