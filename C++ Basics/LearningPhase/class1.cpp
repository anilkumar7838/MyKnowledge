#include<iostream>
using namespace std;
class Array1d{
 private:
    int *ele,size;
    int upperbound,lowerbound;
 public:
	 Array1d(int a){
	   size=a;
	   ele=new int[a]; 
	   upperbound=0;
	   lowerbound=0;	
	 }
	 Array1d(int a,int b){
	 	upperbound=b;
		lowerbound=a;
		size=(b-a)+1;
		ele=new int[b-a+1];
	 }	
//     int& operator[](int i){
//	 	if(i<1||i>size)
//	 	throw "ArrayindexOutofBoundException";
//	 	return ele[i-1];
//     }
     int* &operator[](int x,int y){
	 	if(x<lowerbound||y>upperbound)
	 	throw "ArrayindexOutofBoundException";
	 	return ele;
     }
     void input(){
     	for(int i=0;i<size;i++){
     		cin>>ele[i+lowerbound];
		}
	}
	
};
int main()
{
//	Array1d a(6);
//	try{
//		a.input();
//		int x=a[7];
//		cout<<"Value of x is:"<<x;
//     }
//	catch(const char*str){
//		cout<<str;
//	}
	Array1d a(11,20);
	try{
		a.input();
		int *ptr = a[11,20];
	   	for(int i=11;i<=20;i++){
     		cout<<"Array is:"<<ptr[i];
		}
		
     }
	catch(const char*str){
		cout<<str;
	}
}
