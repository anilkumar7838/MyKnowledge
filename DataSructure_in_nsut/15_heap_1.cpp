#include<iostream>
// #include<cmath>
using namespace std;

void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}

class Heap{
public:
    int *a;
    int cap;
    int curr_size;
    Heap(int s){
        curr_size=0;
        cap=s;
        a=new int[s];
    }
    void PrintArray()
    {
        for(int i=0;i<curr_size;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    int parent(int i){
        // return floor(i/2);
        return ((i-1)/2);
    }
    int left(int i){
        return (2*i +1);
    }
    int right(int i){
        return (2*i +2);
    }
    void insertHeap(int ele){ 
        if(curr_size==cap){
            cout<<"Overflow: Heap full"<<endl;
            return;
        }
        curr_size++;
        int i=curr_size-1;
        a[i]=ele;
        while(i!=0 and a[parent(i)]<a[i]){
            swap(a[i],a[parent(i)]);
            i=parent(i);
        }
    }
    void Heapify(int i){
        int l=left(i);
        int r=right(i);
        int largest=i;
        if(l<curr_size and a[l]>a[i]){
            largest=l;
        }
        if(r<curr_size and a[r]>a[l]){
            largest=r;
        }
        if(largest!=i){
            swap(a[largest],a[i]);
            Heapify(largest);
        }
    }
    int DeleteMax(){
        if(curr_size<=0){
            return -1; 
        }
        if(curr_size==1){
            curr_size--;
            return a[0];
        }
        int root=a[0];
        a[0]=a[curr_size-1];
        curr_size--;
        Heapify(0);
        return root;
    }
};
int main(){
    int size;
    cout<<"Enter Size of Max Heap"<<endl;
    cin>>size;
    Heap obj(size);
    cout<<"Max heap created"<<endl;
    cout<<"Now Enter the element: "<<endl;
    int x;
    for(int i=0;i<size;i++){
        cin>>x;
        obj.insertHeap(x);
    }
    cout<<"After Insertion: "<<endl;
    obj.PrintArray();
    // cout<<"Deleted element is: "<<obj.DeleteMin()<<endl;
    // obj.PrintArray();
    cout<<"Deleted(Decending order) element is: "<<endl;

    for(int i=0;i<size;i++){
        cout<<obj.DeleteMax()<<" ";
    }
    cout<<endl;
    return 0;
//12 23 45 67 89 5 8 10 2 15 20
}
