/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long int num=0,rev=x;
        while(x!=0){
            num=num*10+x%10;
            x/=10;
        }
        return (num==rev);
    }
};
// @lc code=end

