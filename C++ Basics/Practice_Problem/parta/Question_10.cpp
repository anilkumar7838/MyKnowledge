// Calculating simple interest & compound interest
#include<iostream>
using namespace std;
int main()
{
     float p,r,t;
     double s_i_,c_i_,total=1;
     cout<<"Enter Principal amount:";
     cin>>p;
     cout<<"Enter Rate of interest:";
     cin>>r;
     cout<<"Enter time(in years):";
     cin>>t;
     s_i_=(p*r*t)/100;
     for(int i=1;i<=t;i++)
     {
     	total=total*(1+r/100);
	 }
	 c_i_=p*total;
	 cout<<"Simple Interest is Rs."<<s_i_<<"\n";
	 cout<<"Compound Interset is Rs."<<c_i_;
	 return 0;
    
}
