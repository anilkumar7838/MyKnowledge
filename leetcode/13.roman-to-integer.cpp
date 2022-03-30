/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int val(char ch){
        if(ch=='I'){
            return 1;
        }
        if(ch=='V'){
            return 5;
        }
        if(ch=='X'){
            return 10;
        }
        if(ch=='L'){
            return 50;
        }
        if(ch=='C'){
            return 100;
        }
        if(ch=='D'){
            return 500;
        }
        if(ch=='M'){
            return 1000;
        }
        return 0;
    }
    int romanToInt(string s) {
    int prev=0,sum=0;
    for(int i=s.length()-1;i>=0;i--){
        if(val(s[i])>=prev){
            sum+=val(s[i]);
        }
        else{
            sum-=val(s[i]);
        }
        prev=val(s[i]);
    }
    return sum;
    }
};
// @lc code=end

