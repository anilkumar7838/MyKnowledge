#include<iostream>
#include<stack>
using namespace std;
class Queue
{
private:
    stack<int> s1;
public:
    void push(int x){
        // if(s1.full()){
        //     cout<<" queue overflow"<<endl;
        //     return;
        // }
        s1.push(x);
    }
    int pop(){
        if(s1.empty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else{
                int item=s1.top();
                s1.pop();
                if(s1.empty()){
                    return item;
                }
                int x=pop();
                s1.push(item);
                return x;
        }
    }
    bool empty(){
        if(s1.empty()){
            return true;
        }
        return false;
    }

};

int main(){
    Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	cout<<q.pop()<<endl;
	cout<<q.pop()<<endl;
	cout<<q.pop()<<endl;
	cout<<q.pop()<<endl;
	cout<<q.pop()<<endl;
	cout<<q.pop()<<endl;
    return 0;
}

