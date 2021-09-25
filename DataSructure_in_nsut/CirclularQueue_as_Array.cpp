//incomplete
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
        if(front==0 and rear>cap-1){
            cout<<"overflow"<<endl;
            return;
        }
        if((rear+1)==front){
            cout<<"overflow"<<endl;
            return;
        }
        if(rear>cap-1){
            rear=0;
        }
        if(front>cap-1){
            front=0;
        }
        if(front==-1){
            front++;
            rear++;
        }
        // cout<<front<<" "<<rear<<endl;
        arr[rear++]=val;
        return;
    }
    int DeleteEle(){
        if(front==rear){
            front==-1;
            rear==-1;
        }
        if(front==-1){
            cout<<"Underflow"<<endl;
            return -1;
        }
        int item=arr[front];
        if(front==cap-1){
            front=0;
        }else{
            front++;
        }
        return item;
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
    q1.insertEle(5);
    cout<<q1.DeleteEle()<<endl;
    cout<<q1.DeleteEle()<<endl;
    cout<<q1.DeleteEle()<<endl;
    cout<<q1.DeleteEle()<<endl;
    return 0;
}
