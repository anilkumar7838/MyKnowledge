#include<iostream>
#include<cstring>
using namespace std;


int lcs(string str1,string str2){
int dp[100][100]={0};
    int n1=str1.length();
    int n2=str2.length();
    
    for(int i=0;i<=n1;i++){
        dp[0][i]=0;
    }
    for(int i=0;i<=n2;i++){
        dp[i][0]=0;
    }
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            int q=0;
            if(str1[i-1]==str2[j-1]){
                q=1+dp[i-1][j-1];
            }
            else{
                q=max(dp[i-1][j],dp[i][j-1]);
            }
            dp[i][j]=q;
        }
    }
    return dp[n1][n2];
}

int main(){
    string str1="gxtxtab";
    string str2="aggtab";
    // string str1="nematode";
    // string str2="empty";
    cout<<lcs(str1,str2)<<endl;

    // for(int i=0;i<=str1.length();i++){
    //     for(int j=0;j<=str2.length();j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

}