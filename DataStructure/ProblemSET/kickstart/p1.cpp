#include<iostream>
#include<string>
using namespace std;

int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        c++;
        string str1,str2;
        cin>>str1>>str2;
        cout<<"Case #"<<c<<": ";
        int l1=str1.length();
        int l2=str2.length();
        if(l1>l2){
            cout<<"IMPOSSIBLE"<<endl;
            continue;
        }
        int i=0,j=0,count=0;
        while(i<l1 and j<l2){
            if(str1[i]==str2[j]){
                i++;
                j++;
            }
            else{
                j++;
                count++;
            }
        }
        if(i!=l1){
            cout<<"IMPOSSIBLE"<<endl;
        }
        else if(j==l2){
            cout<<count<<endl;
        }
        else if(i==l1 and j<l2){
            cout<<(l2-j)+count<<endl;
        }
        else{
            cout<<"IMPOSSIBLE"<<endl;
        }
    }
    return 0;
}