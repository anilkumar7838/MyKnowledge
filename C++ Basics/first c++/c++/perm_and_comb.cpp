#include<iostream>

using namespace std;



int permutation(int n, int r)

{
	if(n<0||r<0)
	{
		throw "negative number is not allowed ";
	}
	if(r>n)
	{
		throw " r is greater than n thus not solvable.";
	}
	if(r==0)
	return 1;
	else
	return(n*permutation(n-1,r-1));
}



int combination(int n, int r)

{
	if(n<0||r<0)
	{
		throw "negative number is not allowed ";
	}
	if(r>n)
	{
		throw "r is greater than n thus not solvable.";
	}
   if(r==0)
	return 1;
   else
	return((n*1.0/r)*(combination(n-1,r-1)));
 

}



int main()

{
  int n,r;
  cout<<"Enter the total number of ways "<<endl;
  cin>>n;
  cout<<"enter the element you want to select"<<endl;
  cin>>r;
  try
  {
  	int res1=permutation(n,r);
    int res2=combination(n,r);
    cout<<"permutation is: "<<res1<<endl;
    cout<<"combination is: "<<res2<<endl;
  }
  catch(const char* str)
  {
  	cout<<str;
  }
  return 0;
  
  

}
