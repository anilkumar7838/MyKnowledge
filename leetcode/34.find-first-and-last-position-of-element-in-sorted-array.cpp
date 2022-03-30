/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0,j=n-1,a=-1,b=-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]==target){
                int z=mid,y=mid;
                while(z>=1 and nums[z-1]==target){
                    z--;
                }
                a=z;
                while(y<n-1 and nums[y+1]==target){
                    y++;
                }
                b=y;
                return {a,b};
            }
            if(nums[mid]>target){
                j=mid-1;
            }
            else {
                i=mid+1;
            }
        }
        if(a==-1 and b==-1){
            return {-1,-1};
        }
        return {a,b};
    }
};
// @lc code=end

