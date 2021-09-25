#include<iostream>
using namespace std;

# define n 50   
class deque{
    int *a;
    int front,back,size;
public:
    deque(){
        a=new int[n];
        size=0;
        front=-1;
        back=-1;
    }
    void pushFront(int x){
        if(front==-1){
            front++;
            back++;
        }
        else{
            for(int i=(size-1);i>=0;i--){
                a[i+1]=a[i];
            }
            back++;
        }
        a[front]=x;
        size++;
    }
    void pushBack(int x){
        if(front==-1){
            front++;
        }
        back++;
        a[back]=x;
    }
    int popFront(){
        if(front==-1||front>back){
            cout<<"No elements in queue"<<endl;
            return -1;
        }
        int item =a[front];
        front++;
        return item;
    }
    int popBack(){
        if(front==-1||front>back){
            cout<<"No elements in queue"<<endl;
            return -1;
        }
        int item = a[back];
        back--;
        return item;
    }
    bool empty(){
        if(front==-1||front>back){
            return true;
        }
        return false;
    }
};
int main(){
    deque q1;

    q1.pushFront(1);
    q1.pushFront(2);
    q1.pushFront(3);
    q1.pushFront(4);

    cout<<q1.popFront()<<endl;
    cout<<q1.popFront()<<endl;
    cout<<q1.popFront()<<endl;
    cout<<q1.popFront()<<endl;
    
    cout<<q1.popFront()<<endl;

    q1.pushBack(5);
    q1.pushBack(6);
    q1.pushBack(7);
    q1.pushBack(8);

    cout<<q1.popBack()<<endl;
    cout<<q1.popBack()<<endl;
    cout<<q1.popBack()<<endl;
    cout<<q1.popBack()<<endl;

    cout<<q1.popBack()<<endl;
    
    cout<<q1.empty()<<endl;
    return 0;
}