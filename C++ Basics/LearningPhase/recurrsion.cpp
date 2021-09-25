#include<iostream>
using namespace std;


// tower of hanoi


void fun(int n,char a,char b,char c){
	if(n>=1){
		fun(n-1,a,c,b);
		cout<<"Move"<<" plate " <<n<<" from "<<a<<" to "<<c<<endl;
		fun(n-1,b,a,c);
	}
}


//factorial


int fact(int n){

	if(n<=1){
		return 1;
	}
	else{
	return n*fact(n-1);
     }
}


//fibonacci


int fib(int n){
	if(n==1||n==2){
		return 1;
	}
	else
	return (fib(n-1)+fib(n-2));
}


//Gcd

int gcd(int a,int b){
	if(a==b)
	return a;
	if(a%b==0)
	return b;
	if(b%a==0)
	return a;
	if(a>b)
	gcd(a%b,b);
	else
	gcd(a,b%a);
}
int main(){
	char c;
	do{
	int x;
	cout<<"*******************THIS IS MENU DRIVEN PROGRAM OF THREE RECURRSION PROBLEM**************"<<endl;
	cout<<"1. To show the steps to solve the problem of tower of Hanoi"<<endl
	    <<"2. To calculate factorial using recurrsion"<<endl
	    <<"3. To show the nth term of fibonacci series using recurrsion"<<endl
	    <<"4. To Calculate GCD using recurrsion"<<endl
	    <<"Choose your option"<<endl;
	    cin>>x;
	    switch(x){
	    	case 1:{
	    		int n;
             	char a='A',b='B',c='C';
           	cout<<"This Program is made to show the steps to solve the problem of tower of Hanoi"<<endl;
	          cout<<"Enter the number of plates:";
           	cin>>n;
           	cout<<endl;
	          fun(n,a,b,c);
			break;
		    }
		case 2:{ 
		          int n;
		          cout<<"Enter the number whose factorial you should like to calculate:";
		          cin>>n;
               	cout<<fact(n)<<endl;;
		     	break;
		       }
		case 3:	{
			       int n;
		             cout<<"Enter the term:";
		             cin>>n;
		             cout<<n<<"th term of fibonacci series is:"<<fib(n)<<endl;
			        break;
		          }
		case 4:	{
			       int a,b;
		             cout<<"Enter the first number:";
		             cin>>a;
		             cout<<"Enter the second number:";
		             cin>>b;
		             cout<<"GCD of "<<a<<" and "<<b<<" is:"<<gcd(a,b)<<endl;
			        break;
				}          
		default:	{
			       cout<<"You Choose wrong option!!!"<<endl;
			        break;
          		}	         
	    }
	    cout<<"\nDo you wish to continue."<<endl;
	    cout<<"If Yes type 'y' or 'Y' character"<<endl;
	    cin>>c;
      }while(c=='Y'||c =='y');
	
}
