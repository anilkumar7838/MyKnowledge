/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
               
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return -1;
    }
};
// @lc code=end

