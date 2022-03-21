/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
class Solution {
public:
    int myAtoi(string str) {
        if( str.empty()){
            return 0;
        }
        int len = str.length(), i=0, sign = 1;
        
        while( i<len && str[i] == ' ')
            i++;
        
        if(i==len)
            return 0;
        
        if(str[i] == '-'){
            sign = 0;
            i++;
        }
        else if(str[i] == '+')
            i++;
        
        long int num = 0;
        
        while(str[i] >= '0' && str[i] <= '9'){
            num = num * 10;
            if(num <= INT_MIN || num >= INT_MAX)
                break;
            num = num + (str[i] - '0');
            i++;
        }
        
        if(sign == 0)
            num = -1 * num;
        if(num <= INT_MIN)
            return INT_MIN;
        if(num >= INT_MAX)
            return INT_MAX;
        return (int)num;
    }
};
// @lc code=end

