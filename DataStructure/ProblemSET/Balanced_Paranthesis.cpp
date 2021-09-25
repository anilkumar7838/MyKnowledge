#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str;
    bool flag=false;
    int i=0;
    stack<char> st;
     cin>>str;
     int n=str.size();
	for(int i=0;i<n;i++){
		if(str[i]=='{'||str[i]=='('||str[i]=='['){
    			st.push(str[i]);
    		}
		if(str[i]=='}'){
			if(!st.empty()&&st.top()=='{'){
				flag=true;
				st.pop();
			}
			else{
				flag=false;
				break;
			}
		}
		if(str[i]==')'){
			if(!st.empty()&&st.top()=='('){
				flag=true;
				st.pop();
			}
			else{
				flag=false;
				break;
			}
		}
		if(str[i]==']'){
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
		flag=false;
	}
	
	if(flag){
		cout<<"It is balanced paranthesis"<<endl;
	}
	else
	{
		cout<<"It is not a balanced paranthesis"<<endl;
	}
    return 0;
}
