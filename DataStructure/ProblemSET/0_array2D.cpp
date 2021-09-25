#include<iostream>
using namespace std;
void rotateM(int *a,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                int temp=*(a+i*n+j);
                    *(a+i*n+j)=*(a+i+j*n);
                    *(a+i+j*n)=temp;
            }
        }
    }
}
void display(int *a,int m,int n){
    cout<<"Matrix is: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<*(a+i*n+j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n,m,*a;
    cout<<"Enter the size Row/cols: ";
    cin>>m>>n;
    a=new int[m*n];    // i*cols+j
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>*(a+i*n+j);
        }
    }
    rotateM(a,m,n);
    display(a,m,n);
    return 0;
}