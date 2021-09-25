#include<iostream>
#include<queue>
using namespace std;
class stack{
private:
    int cap;
    queue<int> q1;
    queue<int> q2;
public:
    stack(){
        cap=0;
    }
    void push(int val){
        q2.push(val);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
        cap++;
    }
    void pop(){
        q1.pop();
        cap--;
    }
    int top(){
        return q1.front();
    }
    bool empty(){
        if(!q1.empty()){
            return false;
        }
        return true;
    }
};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.empty()<<endl;
}

