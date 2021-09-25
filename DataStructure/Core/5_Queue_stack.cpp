#include<iostream>
using namespace std;
class stack{
private:
	int cap,top,*a;
public:
	stack(int val){
		top=-1;
		cap=val;
		a=new int[val];
	}
	int isfull(){
		if(top==cap-1){
			return 1;
		}
		return 0;
	}
	int isempty(){
		if(top==-1){
			return 1;
		}
		return 0;
	}
	void push(int x){
		if(isfull()){
			return ;
		}
		else{
			top++;
			a[top]=x;
		}
	}
	int pop(){
		if(isempty()){
			// cout<<"stack is empty"<<endl;
			return -1;
		}
		else{
			int item=a[top];
			top--;
			return item; 
		}
	}
};
class queue{
public:
	stack s1=stack(5);
	stack s2=stack(5);
	void push(int val){
		if(s1.isfull()){
			cout<<"queue overflow"<<endl;
			return;
		}
		else{
		s1.push(val);
		}
	}
	int pop(){
		if(s1.isempty() and s2.isempty()){
			cout<<"Queue is Empty"<<endl;
			return -1;
		}
		if(s2.isempty()){
			while(!s1.isempty()){
				s2.push(s1.pop());
			}
		}
		return s2.pop();
	}
	bool empty(){
		if(s1.isempty() and s2.isempty()){
			return true;
		}
		return false;
	}
};
int main(){
	queue q;
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

}