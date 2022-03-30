/*
 * @lc app=leetcode id=1081 lang=cpp
 *
 * [1081] Smallest Subsequence of Distinct Characters
 */

// @lc code=start
class Solution {
public:
    string smallestSubsequence(string s) {
        map<char,int> mp;
        stack<char> st;
        map<char,bool> check;
        string str;
        int n=s.length();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        
        for(int i=0;i<n;i++){
            mp[s[i]]--;
            if(check[s[i]]) continue;
            
            while(!st.empty() and st.top()>s[i] and mp[st.top()]>0){
                check[st.top()]=false;
                st.pop();
            }
            st.push(s[i]);
            check[s[i]]=true;
            
        }
        
        for(int i=st.size()-1;i>=0;i--){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};
// @lc code=end

