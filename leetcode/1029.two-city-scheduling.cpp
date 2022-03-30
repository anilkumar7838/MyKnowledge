/*
 * @lc app=leetcode id=1029 lang=cpp
 *
 * [1029] Two City Scheduling
 */

// @lc code=start
class Solution {
public:
    static bool mycompare(vector<int> v1,vector<int> v2){
        int diff1 = v1[0]-v1[1];
        int diff2 = v2[0]-v2[1];
        return diff1 > diff2 ? false:true;
    }
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size()/2,sum=0;
        sort(costs.begin(),costs.end(),mycompare);
        for(int i=0;i<n;i++){
                sum+=(costs[i][0] + costs[n+i][1]);
        }
        return sum;
    }
};
// @lc code=end

