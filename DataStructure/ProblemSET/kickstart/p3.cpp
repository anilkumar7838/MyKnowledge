#include<iostream>
#include<string>
using namespace std;

int lgtPalindrome(string str){
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
            }
            l--;
            h++;
            if(str[l]=='?'){
                str[l]=str[h];   
            }
            else if(str[h]=='?'){
                str[h]=str[l];
            }
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
            if(str[l]=='?'){
                str[l]=str[h];   
            }
            else if(str[h]=='?'){
                str[h]=str[l];
            }
        }

    }

    // for(int i=start,j=0;i<=end;i++,j++){
    //     ans[j]=str[i];
    // }
    // for(int j=0;j<end;j++){
    //     cout<<ans[j];
    // }
    return (start+end);
}

int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        c++;
        int n;
        cin>>n;
        string str;
        cin>>str;
        cout<<"Case #"<<c<<": ";
        if(lgtPalindrome(str)>=5){
            cout<<"IMPOSSIBLE"<<endl;
        }
        else{
            cout<<"POSSIBLE"<<endl;
        }
        
    }
    return 0;
}