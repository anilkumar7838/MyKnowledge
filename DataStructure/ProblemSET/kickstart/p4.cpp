#include<iostream>
using namespace std;

int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        c++;
        long int a,b;
        cin>>a>>b;
        long int count=0;
        for(long int i=a;i<=b;i++){
            long long int p=1,sum=0;
            int num=i;
            while(num!=0){
                long int x=num%10;
                p*=x;
                sum+=x;
                num/=10;
            }
            // cout<<p<<" "<<sum<<endl;
            if(p%sum==0){
                count++;
            }
        }
        cout<<"Case #"<<c<<": "<<count<<endl;
    }
    return 0;
}