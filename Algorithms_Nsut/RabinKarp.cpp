#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int rabinKarp(string str1,string str2){

    int m,n;
    m=str1.length();
    n=str2.length();

    // int64_t code=1;
    int64_t code=0;
    for(int i=0;i<n;i++){
        // cout<<str2[i]<<' ';
        code=code+((int)str2[i])*pow(10,(n-i-1));
        cout<<code<<" ";
    }
    code%=101;
    cout<<code<<endl;

    int64_t calc=0;
    int j=0;
    while(j<n){
        calc+=(int)str1[j]*pow(10,n-j-1);
        j++;
    }
    int i=0;
    while(i<=m-n){
        if(calc==code){
            return 1;
        }
        else{
            calc=(calc-(int)str1[i]*pow(10,n-1))*10 + (int)str1[i+n];
            calc%=101;

            if(calc<0){
                calc+=101;
            }
            cout<<calc<<endl;
            // cout<<(int)str1[i]*pow(10,n-1)<<" "<<(int)str1[i+n]<<endl;
        }
        i++;
    }

    return 0;
}

int main(){
    // string str1="ababcabcabababd",str2="ababd"; // spuries hit
    // string str1="bcabababd",str2="abab";
    string str1="ababd",str2="bd";
    // string str1="anilkumar",str2="kum";
    // string str1="GEEKS FOR GEEKS",str2="GEEK";
    cout<<rabinKarp(str1,str2)<<endl;
    // int temp=97*pow(10,4)+98*pow(10,3)+97*pow(10,2)+98*pow(10,1)+100;
    // cout<<temp<<" ";
    // cout<<temp%101;
    return 0;
}