#include<iostream>
using namespace std;

void input(int **arr,int m,int n){
    cout<<"Enter the elements of a matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
}
void printM(int **arr,int m,int n){
    cout<<"Matrix is: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void multiplication(int **a,int **b,int r1,int c1,int r2,int c2){
    int**c;
    if(r2!=c1){
        cout<<"Multiplication is not possible Because row2 is not equal to column 1\n"<<endl;
        return;
    }
    c=new int*[r1];
    for(int i=0;i<r1;i++){
        c[i]=new int[c2];
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            c[i][j]=0;
            for(int k=0;k<c1;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printM(c,r1,c2);
}
int main(){
    int **a,**b,**c;
    int row1,row2,col1,col2;

    cout<<"********Matrix Multiplication*********"<<endl;

    cout<<"Enter the row and column of 1 Matrix respectively"<<endl;
    cin>>row1>>col1;
    a=new int*[row1];
    for(int i=0;i<row1;i++){
        a[i]=new int[col1];
    }
    input(a,row1,col1);
    cout<<"Enter the row and column of 2 Matrix respectively"<<endl;
    cin>>row2>>col2;
    b=new int*[row2];
    for(int i=0;i<row2;i++){
        b[i]=new int[col2];
    }
    input(b,row2,col2);
    // //Function for Multiplication
    multiplication(a,b,row1,col1,row2,col2);

return 0;
}