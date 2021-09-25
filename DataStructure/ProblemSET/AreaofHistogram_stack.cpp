// optimize approach O(n)
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// int fun(vector<int> a){
//     int n=a.size(),ans=0,i=0;
//     stack<int> st;
//     a.push_back(0);
//     while(i<n){
//         while(!st.empty() and a[st.top()]>a[i]){
//             // cout<<st.top()<<endl;
//             int t=st.top();
//             int h=a[t];
//             st.pop();
//             if(st.empty()){
//                 ans=max(ans,h*i);
//             }
//             else{
//                 int len =i-st.top()-1;
//                 ans=max(ans,h*len);
//             }
//         }
//         st.push(i);
//         i++;
//     }
//     return ans;
// }

int maxarea(vector<int> v){
    int n=v.size(),area=0;
    int lb[n],rb[n];
    stack<int> st;

    //for right smaller
    st.push(n-1);              // traverse  n->0
    rb[n-1]=n;
    for(int i=n-2;i>=0;i--){
        while(!st.empty() and v[st.top()]>=v[i]){
            st.pop();
        }
        if(st.empty()){
            rb[i]=n;
        }
        else{
            rb[i]=st.top();
        }
        st.push(i);
    }
    // for(int i=0;i<n;i++){
    //     cout<<rb[i]<<" ";
    // }cout<<endl;


    //for left smaller
    st.push(0);               // traverse 0->n-1
    lb[0]=-1;
    for(int i=1;i<n;i++){
        while(!st.empty() and v[st.top()]>=v[i]){
            st.pop();
        }
        if(st.empty()){
            lb[i]=-1;
        }
        else{
            lb[i]=st.top();
        }
        st.push(i);
    }
    // for(int i=0;i<n;i++){
    //     cout<<lb[i]<<" ";
    // }cout<<endl;


    //for maximum area
    for(int i=0;i<n;i++){
        int width=rb[i]-lb[i]-1;
        if(area<width *v[i]){
            area=width*v[i];
        }
    }
    return area;
}


int main(){
    vector<int> v={2,1,5,6,2,3};
    // int ans=fun(v);
    int ans=maxarea(v);
    cout<<"Maximum area is: "<<ans<<endl;
    return 0;
}