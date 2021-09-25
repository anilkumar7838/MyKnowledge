#include<iostream>
#include<stack>
using namespace std;
int pref(char ch){
    if(ch=='^'){
        return 3;
    }
    else if(ch=='+'||ch=='/'){
        return 2;
    }
    else if(ch=='+'||ch=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
string reverse(string str){
    stack<char> st;
    for(int i=0;i<str.length();i++)
    {
        st.push(str[i]);
    }
    string s="";
    for(int i=0;i<str.length();i++)
    {
        s+=st.top();
        st.pop();
    }
    return s;
}
string infix_to_prefix(string str){
    stack<char> st;
    string ans="";
    str=reverse(str);
    // cout<<reverse(str);
    for(int i=0;i<str.length();i++){
        if((str[i]>='a' and str[i]<='z')||(str[i]>='A' and str[i]<='Z')){
            ans+=str[i];
        }
        else if(str[i]==')'){
            st.push(str[i]);
        }
        else if(str[i]=='('){
            while(!st.empty() and st.top()!=')'){
                ans+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() and pref(st.top())>pref(str[i])){
                ans+=st.top();
                st.pop();
            }
            st.push(str[i]);
        }
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    ans=reverse(ans);
    return ans;
}
int main(){
    string str;
    cout<<"Enter the string:";
    cin>>str;
    cout<<infix_to_prefix(str)<<endl;
}