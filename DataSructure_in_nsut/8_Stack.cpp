#include<iostream>
using namespace std;
class stack{
    int *a;
    int top;
    int cap;
public:
    stack(int val){
        cap=val;
        top=-1;
        a=new int[val];
    }
    int isEmpty(){
        if(top==-1){
            return 1;
        }
        return 0;
    }
    int isFull(){
        if(top==cap-1){
            return 1;
        }
        return 0;
    }
    void push(int item){
        if(isFull()){
            cout<<"Stack overflow"<<endl;
            return;
        }
        a[++top]=item;
    }
    int pop(){
        if(isEmpty()){
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        return a[top--];
    }
};
int main(){
    stack ob(4);
    ob.push(1);
    ob.push(2);
    ob.push(3);
    ob.push(4);
    ob.push(5);
    cout<<ob.pop()<<endl;
    cout<<ob.pop()<<endl;
    cout<<ob.pop()<<endl;
    cout<<ob.pop()<<endl;
    cout<<ob.pop()<<endl;
    // int n;
    // cout<<"Enter the size: ";
    // cin>>n;
    // stack st(5);
    // char c;
    // int choice;
    // do{
    //     cout<<"1 For push.\n"
    //     "2 For pop\n";
    //     cout<<"Enter your choice.";
    //     cin>>choice;
    //     switch (choice)
    //     {
    //     case 1:{
    //         int item;
    //         cout<<"Enter the element you want to enter: ";
    //         cin>>item;
    //         st.push(item);
    //         break;
    //     }
    //     case 2:{
    //         int item=st.pop();
    //         if(item==-1){
    //             break;
    //         }
    //         else{
    //             cout<<"The pop element is: "<<item;
    //         }
    //         break;
    //     }
    //     default:{
    //         cout<<"Enter the valid choice!!!\n";
    //         break;
    //     }
    //     }
    //     // fflush(stdin);
    //     cout<<"Do you wish to continue.y/n\n";
    //     cin>>c;
    // }while(c!='n');
    return 0;
}