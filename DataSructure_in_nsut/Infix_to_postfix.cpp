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
string infix_to_postfix(string str){
    stack<char> st;
    string ans="";
    for(int i=0;i<str.length();i++){
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A' and str[i]<='Z')){
            ans+=str[i];
        }
        else if(str[i]=='('){
            st.push(str[i]);
        }
        else if(str[i]==')'){
            while(!st.empty() and st.top()!='('){
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
    return ans;
}
int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    cout<<infix_to_postfix(str)<<endl;;
}