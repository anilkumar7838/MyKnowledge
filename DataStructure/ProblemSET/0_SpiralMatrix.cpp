#include<iostream>
using namespace std;

void spiral(int **a,int m, int n){
    int i,k=0,l=0;
        while(k<m && l<n){
            for(int i=l;i<m;i++){
                cout<<a[k][i]<<" ";
            }
            k++;
            for(int i=k;i<m;i++){
                cout<<a[i][n-1]<<" ";
            }
            n--;
            if(k<m){
                for(int i=n-1;i>=l;i--){
                    cout<<a[m-1][i]<<" ";
                }
                m--;
            }
            if(l<n){
                for(int i=m-1;i>=k;i--){
                    cout<<a[i][l]<<" ";
                }
                l++;
            }
        }
}

int main(){
    int row,cols,**a;
    cout<<"Enter row and column respectively"<<endl;
    cin>>row>>cols;
    a=new int*[row];
    for(int i=0;i<cols;i++){
        a[i]=new int[cols];
    }
    cout<<"Enter the elements of a matrix :"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cin>>a[i][j];
        }
    }
    spiral(a,row,cols);
    // cout<<"Matrix is:"<<endl;
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<cols;j++){
    //         cout<<a[i][j];
    //     }
    // }
    
}