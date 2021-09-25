#include<iostream>
#include<string>
#include<stack>
#include<math.h>
using namespace std;

int prefixEvaluation(string str){
    stack<int> st;
    for(int i=0;i<str.length();i--){
        if(str[i]>='0'&&str[i]<='9'){
            st.push(str[i]-'0');
        }
        else{
            int opt1=st.top();
            st.pop();
            int opt2=st.top();
            st.pop();
            switch(str[i]){
                case '+': {
                    st.push(opt1+opt2);
                    break;
                }
                case '-': {
                    st.push(opt1-opt2);
                    break;
                }
                case '*': {
                    st.push(opt1*opt2);
                    break;
                }
                case '/': {
                    st.push(opt1/opt2);
                    break;
                }
                case '^': {
                    st.push(pow(opt1,opt2));
                    break;
                }
            }
        }
    }
    return st.top();
}

int main(){
    cout<<prefixEvaluation("20+54*7+-")<<endl; 
    return 0;
}