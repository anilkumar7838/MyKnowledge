#include<iostream>
using namespace std;

class stack{
    private:
    int cap,*a;
    int top;
    public:
    stack(int capacity){
        top=-1;
        cap=capacity;
        a=new int[capacity];
    }
    int isFull(){
        if(top==cap-1){
            return 1;
        }
        return 0;
    }
    int isEmpty(){
        if(top==-1){
            return 1;
        }
        return 0;
    }
    void push(int x){
        if(isFull()){
            cout<<"Stack is full/overflow"<<endl;
        }
        else{
            top++;
            a[top]=x;
        }
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
        }
        else{
            cout<<"Pop element is: "<<a[top]<<endl;
            top--;
        }
    }
};

int main(){
    stack ob(4);
    ob.push(1);
    ob.push(2);
    ob.push(3);
    ob.push(4);
    ob.push(5);
    ob.pop();
    ob.pop();
    ob.pop();
    ob.pop();
    ob.pop();
    
    return 0;
}