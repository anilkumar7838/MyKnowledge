/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    
    string longestPalindrome(string str) {
        string ans="";
        int n=str.length();
        int start=0,end=1;
        int l,h;
        for(int i=1;i<n;i++){
            l=i-1;
            h=i;

            while(l>=0 and h<=n and str[l]==str[h]){
                if(h-l+1>end){
                    start=l;
                    end=h-l+1;
                }
                l--;
                h++;
            }
            l=i-1;
            h=i+1;

            while(l>=0 and h<=n and str[l]==str[h]){
                if(h-l+1>end){
                    start=l;
                    end=h-l+1;
                
                }
                l--;
                h++;
            }

        }
        ans=str.substr(start,end);
        
        return ans;
        
 
// @lc code=end

