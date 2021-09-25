#include<iostream>
using namespace std;
long long merge(int arr[],int st,int mid,int end){
    long long inv=0;
    int n1=(mid-st+1);
    int n2=(end-mid);
    int a[n1],b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[st+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=st;
    while(i<n1 and j<n2){
        if(a[i]<=b[j]){
            arr[k]=a[i];
            i++;
        }
        else{
            arr[k]=b[j];
            inv+=n1-i;
            j++;
        }
        k++;
    }
    while(i!=n1){
        arr[k]=a[i];
        i++;k++;
    }
    while(j!=n2){
        arr[k]=b[j];
        j++;k++;
    }
    return inv;
}

long long Inversion(int arr[],int st,int end){
    long long inv=0;
    if(st<end){
        int mid=(st+end)/2;
        inv+=Inversion(arr,st,mid);
        inv+=Inversion(arr,mid+1,end);
        inv+=merge(arr,st,mid,end);
    }
    return inv;
}

int main(){
int arr[]={1,5,8,9,7,4,3,6,2};
cout<<Inversion(arr,0,8)<<endl;
// int arr[]={3,5,6,9,1,2,7,8};
// cout<<Inversion(arr,0,7)<<endl;
// for(int i=0;i<8;i++){
//     cout<<arr[i]<<" ";
// }cout<<endl;
return 0;
}