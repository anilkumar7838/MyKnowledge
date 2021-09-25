#include<iostream>
using namespace std;

void spiral(int **a,int m, int n){
    int i,top=0,bottom=n-1,left=0,right=n-1;
    int count=0,size=m*n;
        while(count<size){
            for(int i=left;i<=right;i++){
                count++;
                a[top][i]=count;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                count++;
                a[i][right]=count;
            }
            right--;
            for(int i=right;i>=left;i--){
                count++;
                a[bottom][i]=count;
            }
            bottom--;
            for(int i=bottom;i>=top;i--){
                count++;
                a[i][left]=count;
            }
            left++;    
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
    // cout<<"Enter the elements of a matrix :"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            // cin>>a[i][j];
            a[i][j]=0;
        }
    }
    spiral(a,row,cols);
    cout<<"Matrix is:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}