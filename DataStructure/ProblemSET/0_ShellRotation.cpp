#include<iostream>
using namespace std;
int count;
//display
void display(int **a,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void reverse(int *a,int li,int hi){
    while(li<hi){
        int temp=a[li];
        a[li]=a[hi];
        a[hi]=temp;
        li++;
        hi--;        
    }
}
// rotate 1d
void rotate1D(int *a,int n,int k){
    k%=n;
    if(k<0){
        k+=n;
    }
    // reverse parts
    reverse(a,0,n-k-1);
    reverse(a,n-k,n-1);
    //reverse whole array
    reverse(a,0,n-1);
}
// 2d->1d
int* shell_to_oneD(int **a,int n,int s){
    int minr=s-1,minc=s-1,maxr=n-s,maxc=n-s;
    int size=2*(maxr-minc+maxc-minc);       //2*((maxr-minr+1)+(maxc-minc+1))-4
    count=size;
    int *arr=new int[size];
    int idx=0;
    for(int i=minr,j=minc;i<=maxr;i++){
        arr[idx++]=a[i][j];
    }
    for(int i=maxr,j=minc+1;j<=maxc;j++){
        arr[idx++]=a[i][j];
    }
    for(int i=maxr-1,j=maxc;i>=minr;i--){
        arr[idx++]=a[i][j];
    }
    for(int i=minr,j=maxc-1;j>=minc+1;j--){
        arr[idx++]=a[i][j];
    }
    return arr;
}
// 1d->2d
void oneD_to_Shell(int **a,int n,int s,int *arr){
    int minr=s-1,minc=s-1,maxr=n-s,maxc=n-s;
    int idx=0;
    for(int i=minr,j=minc;i<=maxr;i++){
        a[i][j]=arr[idx++];
    }
    for(int i=maxr,j=minc+1;j<=maxc;j++){
        a[i][j]=arr[idx++];
    }
    for(int i=maxr-1,j=maxc;i>=minr;i--){
        a[i][j]=arr[idx++];
    }
    for(int i=minr,j=maxc-1;j>=minc+1;j--){
        a[i][j]=arr[idx++];
    }
}
// base function
void shellRotate(int **a,int n,int s,int k){
    int *arr=shell_to_oneD(a,n,s);
    rotate1D(arr,count,k);
    oneD_to_Shell(a,n,s,arr);
    cout<<"Answer: "<<endl;
    display(a,n);
}


int main(){
    int n,m,**a,s,k;
    cout<<"Enter the size: ";
    cin>>n;
    a=new int*[n];
    for (int i=0;i<n;i++){
        a[i]=new int[n];
    }
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the shellnumber and number of rotation: ";
    cin>>s>>k;
    shellRotate(a,n,s,k);
    return 0;
}