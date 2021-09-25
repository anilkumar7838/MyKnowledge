#include<iostream>
#include<string>
#include<stack>
using namespace std;
int Rpara(string str){           // Redundant braces present or not
    stack<char> s1;
    for(int i=0;i<str.length();i++){
        if(str[i]=='('){
            s1.push(str[i]);
        }
        if(str[i]=='+'||str[i]=='-'||str[i]=='/'||str[i]=='*'){
            s1.push(str[i]);
        }
        else if(str[i]==')'){
            int count=0;
            while(s1.top()!='('){
                count++;
                s1.pop();
            }
            if(count==0){
                return 1; 
            }
        }
    }
    return 0;
}
int main(){
    string str={"((a+b)+c)"};
    cout<<Rpara(str)<<endl;;
return 0;
}       