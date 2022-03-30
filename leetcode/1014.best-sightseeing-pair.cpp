/*
 * @lc app=leetcode id=1014 lang=cpp
 *
 * [1014] Best Sightseeing Pair
 */

// @lc code=start
class Solution {
public:
    
    int maxScoreSightseeingPair(vector<int>& a) {
        int n=a.size(),sum=0,ans=INT_MIN;
        sum=a[0]+0;
        
        for(int i=1;i<n;i++){
            ans=max(ans,sum+a[i]-i);
            sum=max(sum,a[i]+i);
        }     
        return ans;
    }
};

// @lc code=end

