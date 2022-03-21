/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int n=nums.size();
        if(n<=2){
            return ans;
        }
        
        sort(nums.begin(),nums.end());
        
        int sum=0;
        for(int i=0;i<n-2;i++){
            if(i==0 ||(i>0 and nums[i]!=nums[i-1])){
                int target=0-nums[i];
                int j=i+1,k=n-1;

                while(j<k){
                    if(target==(nums[j]+nums[k])){
                        vector<int> fav;
                        fav.push_back(nums[i]);
                        fav.push_back(nums[j]);
                        fav.push_back(nums[k]);

                        ans.push_back(fav);
                        while(j<k and nums[j]==nums[j+1]){
                            j++;
                        }
                        while(j<k and nums[k]==nums[k-1]){
                            k--;
                        }

                        j++;
                        k--;
                    }
                    else if(target>(nums[j]+nums[k])){
                        j++;
                    }
                    else{
                        k--;
                    }

                }
            }
        }
        
        return ans;
    }
};
// @lc code=end

