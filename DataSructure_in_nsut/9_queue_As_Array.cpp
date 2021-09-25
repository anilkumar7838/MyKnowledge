#include<iostream>
using namespace std;
#define n 20
class queue{
public: 
    int front,rear;
    int *arr;
    int cap;
    queue(){
        cap=n;
        front=-1;
        rear=-1;
    }
    queue(int size){
        cap=size;
        front=-1;
        rear=-1;
        arr=new int[size];
    }
    void insertEle(int val){
        if(rear==cap-1){
            cout<<"Overflow"<<endl;
            return;
        }
        rear++;
        arr[rear]=val;
        if(front==-1){
            front++;
        }
        return;
    }
    int DeleteEle(){
        if(front==-1||front>rear){
            cout<<"Underflow"<<endl;
            return -1;
        }
        return arr[front++];
    }
};

int main(){
    int size;
    // cout<<"Enter the size of Queue"<<endl;
    // cin>>size;
    queue q1(4);
    q1.insertEle(1);
    q1.insertEle(2);
    q1.insertEle(3);
    q1.insertEle(4);
    q1.insertEle(5);
    cout<<q1.DeleteEle()<<endl;
    cout<<q1.DeleteEle()<<endl;
    cout<<q1.DeleteEle()<<endl;
    cout<<q1.DeleteEle()<<endl;
    cout<<q1.DeleteEle()<<endl;
    return 0;
}
