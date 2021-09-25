#include<iostream>
using namespace std;
int MaxConsecutive(int arr[],int n,int k){
    int j=0,countZero=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            countZero++;
        }
        while(countZero>k){
            if(arr[j]==0){
                countZero--;
            }
            j++;
        }
        ans=max(ans,(i-j+1));
        // cout<<ans<<endl;;
    }
    return ans;
}
int main(){
    int arr[]={1,0,0,1,0,0,0,1,1,1,1,0,0,1};
    cout<<MaxConsecutive(arr,14,3)<<endl;
}