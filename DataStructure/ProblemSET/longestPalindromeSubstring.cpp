#include<iostream>
#include<cstring>
using namespace std;

string lgtPalindrome(string str){
    string ans="";
    int n=str.length();
    int start=0,end=1;
    int l,h;
    for(int i=1;i<n;i++){
        l=i-1;
        h=i;
        
        while(l>=0 and h<=n and str[l]==str[h]){
            if(h-l+1>end){
                start=l;
                end=h-l+1;
                // break;
            }
            l--;
            h++;
        }
        l=i-1;
        h=i+1;

        while(l>=0 and h<=n and str[l]==str[h]){
            if(h-l+1>end){
                start=l;
                end=h-l+1;
                // break;
            }
            l--;
            h++;
        }

    }

    for(int i=start,j=0;i<=end;i++,j++){
        ans[j]=str[i];
    }
    for(int j=0;j<end;j++){
        cout<<ans[j];
    }
    return ans;
}

int main(){
    string str="abcacbcbac";
    // string str="abccbc";
    cout<<lgtPalindrome(str);

    return 0;
}