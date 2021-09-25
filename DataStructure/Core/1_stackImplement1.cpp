/* REVERSE A SENTENCE USING STACK
   Hey, how are you doing?
   doing? you are how Hey,
*/
#include<iostream>
#include<string>
#include<sstream>
#include<stack>
using namespace std;

void reverseSentence(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        string word="";
        while(s[i]!=' '&& i<s.length()){
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}

int main(){
    string str1="Hey, how are you doing?";
    // cout<<"Enter the string"<<endl;
    // cin>>str1;
    reverseSentence(str1);


    // This code is for seperate string

    // string str="Hey, how are you doing?";
    // stringstream ss(str);
    // string word;
    // while(ss>>word){
    //     cout<<word<<endl;
    // }
    return 0;
}