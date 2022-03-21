/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
bool isValid(string s) {
    stack<char> st;
    bool flag=false;
    for(int i=0;i<s.length();i++){
        if(s[i]=='{'||s[i]=='('||s[i]=='['){
    		st.push(s[i]);
    	}
		if(s[i]=='}'){
			if(!st.empty()&&st.top()=='{'){
				flag=true;
				st.pop();
			}
			else{
				flag=false;
				break;
			}
		}
		if(s[i]==')'){
			if(!st.empty()&&st.top()=='('){
				flag=true;
				st.pop();
			}
			else{
				flag=false;
				break;
			}
		}
		if(s[i]==']'){
			if(!st.empty()&&st.top()=='['){
				flag=true;
				st.pop();
			}
			else{
				flag=false;
				break;
			}
		}
    }
    if(!st.empty()){
        return false;
    }
        return flag;
    }
};
// @lc code=end

