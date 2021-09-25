#include<iostream>
using namespace std;

int main(){
long int n,ans=0;
cin>>n;

while(n!=0){
    ans=ans*10+n%10;
    n/=10;
}
cout<<ans<<endl;
return 0;
}