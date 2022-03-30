/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& v, int target) {
        int i=0;
        for(i=0;i<v.size();i++){
            if(v[i]>target){
                return i;
            }
            else if(v[i]==target){
                return i;
            }
        }
        return i;
    }
};
// @lc code=end

