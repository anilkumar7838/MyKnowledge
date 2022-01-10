#include<iostream>
#include<cstring>
using namespace std;

int lcs(string str1,string str2,int i,int j){
    // static int count=0;
    if(i>=str1.length() || j>=str2.length()){
        return 0;
    }
    if(str1[i]==str2[j]){
        return (lcs(str1,str2,i+1,j+1)+1);
    }
    return max(lcs(str1,str2,i,j+1),lcs(str1,str2,i+1,j));
}

int main(){
    // string str1="asdflhkjadgkjcvbmdfgkjh";
    string str1="nematode";
    string str2="empty";

    cout<<lcs(str1,str2,0,0)<<endl;

}