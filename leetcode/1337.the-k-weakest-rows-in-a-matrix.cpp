/*
 * @lc app=leetcode id=1337 lang=cpp
 *
 * [1337] The K Weakest Rows in a Matrix
 */

// @lc code=start
class Solution {
public:
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int,int>> cnt;
        vector<int> ans;
        int minim=INT_MAX,idx=-1;   
        for(int i=0;i<mat.size();i++){
            int c=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    c++;
                }
            }
            if(c<minim){
                minim=c;
                idx=i;
            }
            cnt.insert(make_pair(c,i));
        }
        if(k==1){
            return {idx};
        }
    
        for(auto p:cnt){
            if(k==0){
                break;
            }
            ans.push_back(p.second);
            k--;
        }
        return ans;
    }
};
// @lc code=end

