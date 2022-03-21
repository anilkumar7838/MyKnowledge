#include<iostream>
#include<vector>
using namespace std;
string fun(vector<string> strs){
    string ans="";
    string prev=strs[0];
        for(int i=1;i<strs.size();i++){
            ans="";
            int j=0;
            // cout<<j<<" "<<prev<<endl;
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
            // cout<<prev<<endl;
        }
        return prev;
}

string longestCommonPrefix(vector<string>& strs)
    {
       int m=strs.size();
        int ans=0;
        string s;
        
        bool flag=false;
        for(int j=0;j<strs[0].length();j++)
        {
            
            for(int i=0;i<m-1;i++)
            {
                
            
                if(strs[i][j]!=strs[i+1][j])
                {
                    flag=true;
                    break;
                }
                
            }
            
         if(!flag)
         {
               s+=strs[0][j];
         }
            else
            {
                return s;
            }
            
            
        }
        
        return s;
        
    }
int main(){
vector<string> strs={"flower","flow","flight"};
cout<<fun(strs)<<endl;
return 0;
}