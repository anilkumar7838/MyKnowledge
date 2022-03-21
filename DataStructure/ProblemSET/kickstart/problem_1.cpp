#include<iostream>
using namespace std;

int main(){
    int t,n,k;
    string str;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cin>>str;
        int cnt=0;
        for(int i=0;i<n/2;i++){
            if(str[i]!=str[n-i-1]){
                cnt++;   
            }
        }
        cout<<abs(cnt-k)<<endl;
    }
    return 0;
}