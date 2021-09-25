#include<iostream>
using namespace std;

void print(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


int  Summation(int *a,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}


void fun(int *a,int index,int sum,int digit){
    int i=0;
    if(index<digit-1){          //For n-1 digit
        while(i<=sum){          // loop should not exceed Sum;
            a[index]=i;
            fun(a,index+1,sum,digit);
            i++;
        }
    }
    else{
        int i=0;
        while(i<=sum){
            a[index]=i;
            if(Summation(a,digit)==sum){
                print(a,digit);
            }
            i++;
        }
    }
}


int main(){
    int *a,sum,digit;
    cout<<"Enter the number of digit: ";
    cin>>digit;
    cout<<"Enter the sum of a digits: ";
    cin>>sum;
    a=new int[digit];
    for(int i=0;i<digit;i++){
        a[i]=0;
    }
    fun(a,0,sum,digit);
}