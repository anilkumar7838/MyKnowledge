/*menu driven programing
name::Deepanshu Attri
rollno.19HCS4062
course::BSC(H)Computer science 1 st year */

#include<iostream>	 		
using namespace std;
void print(int ar[][100],int r,int c);
void input();
void output();
void transpose();
void sumarray();
void sumdiagonal();
void sumnondiagonal();
void sumupper();
void sumlower();
void sumrowcoloumn();
void arithmetic();
int main(){
	int n;
	cout<<" Enter 1 to input 2d array "<<endl;
	cout<<" Enter 2 to print 2d array "<<endl;
	cout<<" Enter 3 to find transpose of a matix"<<endl;
	cout<<" Enter 4 to calculate sum of elements of 2d array "<<endl;
	cout<<" Enter 5 to calculate sum of diagonal elements of 2d array "<<endl;
	cout<<" Enter 6 to calculate sum of non-diagonal elements of 2d array "<<endl;
	cout<<" Enter 7 to print sum of upper triangle "<<endl;
	cout<<" Enter 8 to print sum of lower triangle "<<endl;
	cout<<" Enter 9 to find sum of each row and coloumn of a 2d array"<<endl;
	cout<<" Enter 10 to find sum , subtraction and division of two 2d array"<<endl;
	
	cout<<"Enter Your Choice : ";
	cin>>n;
	switch(n){
		case 1 : input();
				break;
		case 2 : output();
				break;
		case 3 : transpose();
				break;
		case 4 : sumarray();
				break;
		case 5 : sumdiagonal();
				break;
		case 6 : sumnondiagonal();
				break;
		case 7 : sumupper();
				break;
		case 8 : sumlower();
				break;
		case 9 : sumrowcoloumn();
				break;
		case 10 : arithmetic();
				break;
		default : cout<<"WRONG CHOICE ENTER AGAIN: ";
					break;
}
	
		
	return 0;
}
void input(){
	int r,c,n,ar[100][100],i,j;
	cout<<"Enter 1 to take input row-wise "<<endl;
	cout<<"Enter 2 to take input coloumn-wise "<<endl;
	cout<<" Enter Your choice : ";
	cin>>n;
	if(n==1){
		cout<<"Enter no of rows : ";
		cin>>r;
		cout<<"Enter no of coloumns :";
		cin>>c;
		cout<<"Enter "<<r*c<<" Elements Of 2d array :"<<endl;
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				cin>>ar[i][j];
			}
		}
		print(ar,r,c);
	}
	if(n==2){
		cout<<"Enter no of rows : ";
		cin>>r;
		cout<<"Enter no of coloumns :";
		cin>>c;
		cout<<"Enter "<<r*c<<" Elements Of 2d array :-"<<endl;
		for(int i=0;i<c;i++){
			for(int j=0;j<r;j++){
				cin>>ar[j][i];
			}
		}
		print(ar,r,c);
	}
}
void output(){
	int r,c,n,ar[100][100],i,j;	
		cout<<"Enter no of rows : ";
		cin>>r;
		cout<<"Enter no of coloumns :";
		cin>>c;
		cout<<"Enter "<<r*c<<" Elements Of 2d array :-"<<endl;
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				cin>>ar[i][j];
			}
		}
		cout<<"The Matrix In Row Measure :-"<<endl;
			for(int i=0;i<r;i++){
				for(int j=0;j<c;j++){
					cout<<ar[i][j]<<" ";
				}cout<<"\n";
			}
	
		cout<<"The Matrix In coloumn measure :-\n";
			for(int i=0;i<r;i++){
				for(int j=0;j<c;j++){
					cout<<ar[j][i]<<" ";
				}cout<<"\n";
			}
		
		
}
void transpose(){
	int r,c,n,ar[100][100],i,j,ar1[100][100];	
		cout<<"Enter no of rows : ";
		cin>>r;
		cout<<"Enter no of coloumns :";
		cin>>c;
		cout<<"Enter "<<r*c<<" Elements Of 2d array :-\n";
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				cin>>ar[i][j];
			}
		}
		cout<<"Given Array is :-\n";
		print(ar,r,c);
		int temp;
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				ar1[i][j] = ar[j][i];
			}
		}
		cout<<"Array After Transpose :-\n";
		print(ar1,c,r);
		
}
void sumarray(){
		int r,c,n,arr[100][100],i,j,arr1[100][100];	
		cout<<"Enter no of rows : ";
		cin>>r;
		cout<<"Enter no of coloumns :";
		cin>>c;
		cout<<"Enter "<<r*c<<" Elements Of 2d array :-\n";
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				cin>>arr[i][j];
			}
		}
		cout<<"Given Array is :-\n";
		print(arr,r,c);
		int sum=0;
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				sum += arr[i][j];
			}
		}
		cout<<"\nSum of Elements Of Array Is : "<<sum;
}
void sumdiagonal(){
		int r,n,arr[100][100],i,j;	
		cout<<"Enter no of rows & coloumn: ";
		cin>>r;
		cout<<"Enter "<<r*r<<" Elements Of 2d array :-\n";
		for(i=0;i<r;i++){
			for(j=0;j<r;j++){
				cin>>arr[i][j];
			}
		}
		cout<<"Given Array is :-\n";
		print(arr,r,r);
		int sum=0;
		for(i=0;i<r;i++){
			for(j=0;j<r;j++){
				if(i==j || i+j==r-1)
				sum += arr[i][j];
			}
		}
		cout<<"\nSum of Diagonal Elements Of Array Is : "<<sum;
}
void sumnondiagonal(){
		int r,n,arr[100][100],i,j;	
		cout<<"Enter no of rows & coloumn: ";
		cin>>r;
		cout<<"Enter "<<r*r<<" Elements Of 2d array :-\n";
		for(i=0;i<r;i++){
			for(j=0;j<r;j++){
				cin>>arr[i][j];
			}
		}
		cout<<"Given Array is :-\n";
		print(arr,r,r);
		int sum=0;
		for(i=0;i<r;i++){
			for(j=0;j<r;j++){
				if(i!=j && (i+j)!=r-1)
				sum += arr[i][j];
			}
		}
		cout<<"\nSum of Diagonal Elements Of Array Is : "<<sum;
}
void sumupper(){
		int r,n,arr[100][100],i,j;	
		cout<<"Enter no of rows & coloumn: ";
		cin>>r;
		cout<<"Enter "<<r*r<<" Elements Of 2d array :-\n";
		for(i=0;i<r;i++){
			for(j=0;j<r;j++){
				cin>>arr[i][j];
			}
		}
		cout<<"Given Array is :-\n";
		print(arr,r,r);
		int sum=0;
		for(i=0;i<r;i++){
			for(j=0;j<r;j++){
				if(i<j)
				sum += arr[i][j];
			}
		}
		cout<<"\nSum of Diagonal Elements Of Array Is : "<<sum;
}
void sumlower(){
	int r,n,arr[100][100],i,j;	
		cout<<"Enter no of rows & coloumn: ";
		cin>>r;
		cout<<"Enter "<<r*r<<" Elements Of 2d array :-\n";
		for(i=0;i<r;i++)
		{
			for(j=0;j<r;j++)
			{
				cin>>arr[i][j];
			}
		}
		cout<<"Given Array is :-\n";
		print(arr,r,r);
		int sum=0;
		for(i=0;i<r;i++)
		{
			for(j=0;j<r;j++)
			{
				if(i>j)
				sum += arr[i][j];
			}
		}
		cout<<"\nSum of Diagonal Elements Of Array Is : "<<sum;
}
void sumrowcoloumn(){
		int r,c,n,arr[100][100],i,j,arr1[100][100];	
		cout<<"Enter no of rows : ";
		cin>>r;
		cout<<"Enter no of coloumns :";
		cin>>c;
		cout<<"Enter "<<r*c<<" Elements Of 2d array :-\n";
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cin>>arr[i][j];
			}
		}
		cout<<"Given Array is :-\n";
		print(arr,r,c);
		int sum=0;
		cout<<"\n";
		for(i=0;i<r;i++)
		{
			sum=0;
			for(j=0;j<c;j++)
			{
				sum += arr[i][j];
			}
			cout<<"Sum of row "<<i<<" is : "<<sum<<endl;
		}
		cout<<"\n\n";
		for(i=0;i<c;i++)
		{
			sum=0;
			for(j=0;j<r;j++)
			{
				sum += arr[j][i];
			}
			cout<<"Sum of coloumn "<<i<<" is : "<<sum<<endl;
		}
}
void arithmetic()
{
	int r,c,arr1[100][100],arr2[100][100],n;
	cout<<"Enter no of rows : ";
	cin>>r;
	cout<<"Enter no Of coloumns : ";
	cin>>c;
	cout<<"Enter "<<r*c<<" elements Of first array :-\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>arr1[i][j];
		}
	}
	cout<<"Enter "<<r*c<<" elements Of second array :-\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>arr2[i][j];
		}
	}
	cout<<"Matrices Entered are :-\n";
	print(arr1,r,c);
	cout<<"\n";
	print(arr2,r,c);
	
	cout<<"Enter 1 to perform addition on these matrices "<<endl;
	cout<<"Enter 2 to perform subtraction on these matrices "<<endl;
	cout<<"Enter 3 to perform division on these matrices endl";
	cout<<"Enter Your choice :";
	cin>>n;
	if(n==1)
	{
		cout<<"Addition Of These Matrices Is :-"<<endl;
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				cout<<arr1[i][j] + arr2[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else if(n==2)
	{
		cout<<"Subtraction Of These Matrices Is :-"<<endl;
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				cout<<arr1[i][j] - arr2[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	else if(n==3)
	{
		cout<<"Division Of These Matrices Is :-"<<endl;
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				if(arr2[i][j]==0)
				{
					cout<<"-1";
				}else{
					cout<<arr1[i][j]/arr2[i][j]<<" ";	
				}
				
			}
			cout<<"\n";
		}
	}
	
}
void print(int ar[100][100],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
}
