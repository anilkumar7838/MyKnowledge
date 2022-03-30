/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
 */

// @lc code=start
class Solution {
public:
    string convert(string s, int numRows) {
        int col=0,k=0;
        int n=s.length();
        if(s.size()<=1){return s;}
        if (numRows == 1) return s;
        
        vector<vector<char>> v(numRows,vector<char>(n,' '));
        
        for(int i=0;s[k]!='\0';i++){
            for(int j=0;j<numRows;j++){
                if(s[k]!='\0'){ 
                    v[j][col]=s[k];
                    k++;
                }
                else break;
            }
            col++;

            for(int x=(numRows-2);x>0;x--){
                 if(s[k]!='\0') {
                     v[x][col++]=s[k];
                     k++;
                 }
                else break;
            }
        }
        string str="";
        
        for(int i = 0; i < numRows; i++){
            for(int j = 0; j < k; j++){
                if(v[i][j]!=' ')
                str+=v[i][j];
                
            }
        }
        return str;
    }
};
// @lc code=end

