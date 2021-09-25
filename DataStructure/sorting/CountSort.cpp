// Time Complexity: O(max(Ai,N));
#include<iostream>
using namespace std;

void countSort(int arr[],int n){
    int k=arr[0];
    for(int i=0;i<n;i++){         //O(n)
        k=max(k,arr[i]);
    }
    int count[20]={0};        //count[k] not possible;
    for(int i=0;i<n;i++){      //O(n)
        count[arr[i]]++;
    }
    for(int i=1;i<=k;i++){        //O(A(max))
        count[i]+=count[i-1];
    }
    int ans[n];
    for(int i=n-1;i>=0;i--){     //O(n)
        ans[--count[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=ans[i];
    }
}
int main(){
int arr[]={1,3,2,3,4,1,6,4,3};
countSort(arr,9);
for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
}cout<<endl;
return 0;
}