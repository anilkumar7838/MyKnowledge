#include<iostream>
using namespace std;
int check(char ch){ 
        if(ch=='I'){
            return 1;
        }
        if(ch=='V'){
            return 5;
        }
        if(ch=='X'){
            return 10;
        }
        if(ch=='L'){
            return 50;
        }
        if(ch=='C'){
            return 100;
        }
        if(ch=='D'){
            return 500;
        }
        if(ch=='M'){
            return 1000;
        }
}
int roman(string str){
    int prev=0,sum=0;
    for(int i=str.length()-1;i>=0;i--){
        int curr=check(str[i]);
        if(curr>=prev){
            sum+=curr;
        }
        else{
            sum-=curr;
        }
        prev=curr;
    }
    return sum;
}
int main(){
string str="CXLIV";
cout<<roman(str)<<endl;
return 0;
}