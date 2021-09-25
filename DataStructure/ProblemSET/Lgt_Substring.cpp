//brute force
#include<iostream>
#include<vector>
using namespace std;
int search(string str,char ele,int st){
    for(int i=st;i<str.length();i++){
        if(str[i]==ele){
            return i;
        }
        // cout<<str[i]<<endl;
    }
    return -1;
}
void Substring(string str){
    string s="";
    int j=0,ans=0;
    for(int i=0;i<str.length();i++){
        int pos=search(s,str[i],j);
        if(pos!=-1){
            j=pos+1;
        }
        s+=str[i];
        ans=max(ans,i-j+1);
    }
    cout<<"answer1: "<<ans<<endl;
}
int main(){
    string str="sdfjaeafhjegfkflakf";
    Substring(str);
    // optimize Approach
    vector<int> dict(256,-1);
    int maxlen=0,start=-1;
    for(int i=0;i<str.length();i++){
        if(dict[str[i]]>start){
            start=dict[str[i]];
        }
        dict[str[i]]=i;
        maxlen=max(maxlen,i-start);
    }
    cout<<"answer2: "<<maxlen<<endl;

}