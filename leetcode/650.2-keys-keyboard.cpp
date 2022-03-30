/*
 * @lc app=leetcode id=650 lang=cpp
 *
 * [650] 2 Keys Keyboard
 */

// @lc code=start
class Solution {
public:
    int minSteps(int target) {
       int cnt=0;
       for(int i=2;target!=1;i++){
           while(target%i==0){
               cnt+=i;
               target/=i;
           }
       } 
     return cnt;
    }
};
// @lc code=end

