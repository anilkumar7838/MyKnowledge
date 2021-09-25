#include<bits/stdc++.h>
using namespace std;
class heap{
    vector<int> v;
    bool heap_type;
    bool compare(int a,int b)
    {
        if(heap_type)
        {
            return b>a;
        }
        return a>b;
    }
    void heap_reconstruct(int idx)
    {
        int left=2*idx;
        int right=2*idx+1;
        int last_idx=v.size()-1,min_idx=idx;
        if(last_idx>=left and compare(v[left],v[idx]))
        {
            min_idx=left;
        }
        if(right<=last_idx and compare(v[right],v[min_idx]))
        {
            min_idx=right;
        }
        if(min_idx!=idx)
        {
            swap(v[min_idx],v[idx]);
            heap_reconstruct(min_idx);
        }
    }
    public:
    heap(int size,bool b)
    {
        v.reserve(size);
        heap_type=b;
        v.push_back(-1);
    }
    void insertion(int data)
    {
        v.push_back(data);
        int idx=v.size()-1;
        int parent=idx/2;
        while(idx>1 and compare(v[idx],v[parent]))
        {
            swap(v[idx],v[parent]);
            idx=parent;
            parent=parent/2;
        }
    }
    int top()
    {
        return v[1];
    }
    void deletion()
    {   int last_idx=v.size()-1;
        swap(v[1],v[last_idx]);
        v.pop_back();
        heap_reconstruct(1);
    }
    bool empty()
    {
        return v.size()==1;
    }
};
int main()
{  cout<<"enter type of heap";
    bool b=true;
    string x;
    cin>>x;
    string k="maxheap";
    if(x==k)
    {
        b=false;
    }
    heap h(100,b);
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        h.insertion(num);
    }
    while(!h.empty())
    {
        cout<<h.top()<<" ";
        h.deletion();
    }
    return 0;
}