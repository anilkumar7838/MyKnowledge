/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        string prev=strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0;
            ans="";
            string curr=strs[i];
            while(curr[j]!='\0' && prev[j]!='\0'){
                if(prev[j]==curr[j]){
                    ans+=prev[j];
                    j++;
                }
                else{
                    break;
                }
            }
            prev=ans;
        }
        return prev;
    }
};
// @lc code=end

