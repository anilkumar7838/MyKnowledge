/*
 * @lc app=leetcode id=312 lang=cpp
 *
 * [312] Burst Balloons
 */

// @lc code=start
class Solution {
public:
    int dp[500][500];
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                    dp[i][j]=0; 
            }
        }
        long long left,right,value;
        for(int g=0;g<n;g++){
            for(int i=0,j=g;j<n;j++,i++){
                long long max=INT_MIN;
                for(int k=i;k<=j;k++){
                    left=(k==i)?0:dp[i][k-1];
                    right=(k==j)?0:dp[k+1][j];
                    value=(i==0?1:nums[i-1])*nums[k]*((j==n-1)?1:nums[j+1]);
                    
                    long long total=left+right+value;
                    if(total>max){
                        max=total;
                    }
                }
                dp[i][j]=max;
            }
        }
        return dp[0][n-1];
    }
};
// @lc code=end

