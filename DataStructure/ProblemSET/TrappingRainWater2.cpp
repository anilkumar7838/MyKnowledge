#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//stack Approach
int rain_water(vector<int> a){
    stack<int> st;
    int n=a.size(),ans=0;
    for(int i=0;i<n;i++){
        while(!st.empty() and a[st.top()]<a[i]){
            int cur=st.top();
            st.pop();
            if(st.empty()){
                break;
            }
            int width=i-st.top()-1;
            ans+=(min(a[st.top()],a[i])-a[cur])*width;
        }
        st.push(i);
    }
    return ans;
}
// two pointer Approach
int trap(vector<int> v){         //very important
    int n=v.size(),res=0;
    int left=0,right=n-1;
    int leftmax=0,rightmax=0;
    while(left<=right){
        if(v[left]<=v[right]){
            if(v[left]>=leftmax){
                leftmax=v[left];
            }
            else{
                res+=leftmax-v[left];
            }
            left++;
        }
        else{
            if(v[right]>=rightmax){
                rightmax=v[right];
            }
            else{
                res+=rightmax-v[right];
            }
            right--;
        }
    }
    return res;
}
int main(){
vector<int> a={0,1,0,2,1,0,1,0,1,3,2,1,2,1};
// vector<int> a={0,1,0,2,0,1,2,3,0,2,0,1,0,3};
// cout<<rain_water(a);
cout<<trap(a);
return 0;
}