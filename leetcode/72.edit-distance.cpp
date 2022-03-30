/*
 * @lc app=leetcode id=72 lang=cpp
 *
 * [72] Edit Distance
 */

// @lc code=start
class Solution {
public:
    int dp[501][501]={0};
    
    int editDist(string str1,string str2,int m,int n){
        dp[0][0]=0;
        
        for(int i=1;i<=n;i++){
            dp[0][i]=dp[0][i-1]+1;
        }
        for(int j=1;j<=m;j++){
            dp[j][0]=dp[j-1][0]+1;
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(str1[i-1]==str2[j-1]){
                    dp[i][j]=dp[i-1][j-1];
                }
                else{
                    dp[i][j]=1+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
                }
            }
        }
        
        
        return dp[m][n];
         
    }
    
    int minDistance(string word1, string word2) {
        int len1=word1.length();
        int len2=word2.length();
        
        return editDist(word1,word2,len1,len2);
    }
};
// @lc code=end

