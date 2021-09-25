#include<iostream>
using namespace std;
int main(){
    long int num=0,x;
    cout<<"Enter the number: ";
    cin>>x;
    int rev=x;
    if(x<0){
        cout<<"0"<<endl;
        return 0;
    }
    while(x!=0){
        num=num*10+x%10;
        x/=10;
    }
    cout<<(rev==num)<<endl;
    return 0;
}