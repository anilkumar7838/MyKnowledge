/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        vector<int> dict(256,-1);
        int maxlen=0,start=-1;
        for(int i=0;i<str.length();i++){
            if(dict[str[i]]>start){
                start=dict[str[i]];
            }
            dict[str[i]]=i;
            maxlen=max(maxlen,i-start);
        }
        return maxlen;

    }
};
// @lc code=end

