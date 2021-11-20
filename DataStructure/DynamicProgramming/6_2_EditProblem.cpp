#include<iostream>
#include<cstring>
using namespace std;

int editTxt(string str1,string str2){
    int ans=0;
    int dp[101][101];
    
    dp[0][0]=0;
    //insertion
    for(int i=1;i<=str2.length();i++){
        dp[0][i]=dp[0][i-1]+1;
    }
    //deletion
    for(int j=1;j<=str1.length();j++){
        dp[j][0]=dp[j-1][0]+1;
    }
    // main
    int q1,q2,q3;
    for(int i=1;i<=str1.length();i++){
        for(int j=1;j<=str2.length();j++){
            q1=dp[i-1][j-1]; //replacement
            q2=dp[i][j-1]; //insertion
            q3=dp[i-1][j]; //deletion
            dp[i][j]=min(q1,min(q2,q3))+ (str1[i-1]!=str2[j-1]);
        }
    }
    
    // print dp

    //  for (int i = 0; i <= str1.length(); i++){
    //     for (int j = 0; j <= str2.length(); j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return dp[str1.length()][str2.length()];
}

int main(){
    string str1="sunday",str2="saturday";
    // cin>>str1;
    // cin>>str2;
    cout<<editTxt(str1,str2)<<endl;
}