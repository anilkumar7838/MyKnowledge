/*
    NAME:                   ANIL KUMAR
    ROLL NUMBER:            2020UCD2101
    CLASS AND SECTION :     CSDS 01
    MOBILE NUMBER:          7838180782
*/
#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;

// ----------print------------
void printM(int **arr,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){   
                cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
//----------Max Size---------
void maxsize(int r1,int c1,int r2,int c2,int &size){
    int i=1;
    int check=pow(2,i);
    size=max(r1,max(c1,max(r2,c2)));
    while(size>check){
        i++;
        check=pow(2,i);
    }
    size=check;

}
//--------Feasible------------
int** feasibleM(int **arr1,int m,int n,int size){
    int **a;
    a=new int*[size];
    for(int i=0;i<size;i++){
        a[i]=new int[size];
    }
    for(int i=0,k=0;i<size;i++,k++){
        for(int j=0,l=0;j<size;j++,l++){
            if(k<m and l<n){
                a[i][j]=arr1[k][l];
            }
            else{
                a[i][j]=0;
            }
        }
    }
    return a;
}

//---------Partition-----------
int** partitionM(int **arr,int n,int s1,int s2,int l1,int l2){
    int m=n/2;
    int **temp;
    temp=new int*[m];
    for(int i=0;i<m;i++){
        temp[i]=new int[m];
    }
    // int temp[m][m];
    for(int i=s1,x=0;i<s2;i++,x++){
        for(int j=l1,y=0;j<l2;j++,y++){
            temp[x][y]=arr[i][j];
        }
    }
    return temp;
}
// ----------ADDITION-----------
int ** addM(int **a,int**b,int n){
    int **c;
    c=new int*[n];
    for(int i=0;i<n;i++){
        c[i]=new int[n];
    }
    for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				c[i][j]=a[i][j] + b[i][j];
			}
		}
        return c;
}

//-----------MULTIPLICATION------------
int** multiplyM(int **a,int **b,int n){
    int** c;
    c=new int*[n];
    for(int i=0;i<n;i++){
        c[i]=new int[n];
    }
    if(n==2){
        c[0][0]=(a[0][0]*b[0][0])+(a[0][1]*b[1][0]);
        c[0][1]=(a[0][0]*b[0][1])+(a[0][1]*b[1][1]);
        c[1][0]=(a[1][0]*b[0][0])+(a[1][1]*b[1][0]);
        c[1][1]=(a[1][0]*b[0][1])+(a[1][1]*b[1][1]);
        return c;
    }
    else if(n<2){
        c[n-1][n-1]=a[n-1][n-1]*b[n-1][n-1];
        return c;
    }
    else{
        int **a11,**a12,**a21,**a22;
        int **b11,**b12,**b21,**b22;
        a11=partitionM(a,n,0,n/2,0,n/2);
        a12=partitionM(a,n,0,n/2,n/2,n);
        a21=partitionM(a,n,n/2,n,0,n/2);
        a22=partitionM(a,n,n/2,n,n/2,n);

        b11=partitionM(b,n,0,n/2,0,n/2);
        b12=partitionM(b,n,0,n/2,n/2,n);
        b21=partitionM(b,n,n/2,n,0,n/2);
        b22=partitionM(b,n,n/2,n,n/2,n);
        
        int** sum1=multiplyM(a11,b11,n/2);
        int**sum2=multiplyM(a12,b21,n/2);
        int **t1=addM(sum1,sum2,n/2);

        sum1=multiplyM(a11,b12,n/2);
        sum2=multiplyM(a12,b22,n/2);
        int **t2=addM(sum1,sum2,n/2);

        sum1=multiplyM(a21,b11,n/2);
        sum2=multiplyM(a22,b21,n/2);
        int **t3=addM(sum1,sum2,n/2);

        sum1=multiplyM(a21,b12,n/2);
        sum2=multiplyM(a22,b22,n/2);
        int **t4=addM(sum1,sum2,n/2);

        for(int i=0,p=0;i<n/2;i++,p++){
            for(int j=0,q=0;j<n/2;j++,q++){
                c[p][q]=t1[i][j];
            }
        }
        for(int i=0,p=0;i<n/2;i++,p++){
            for(int j=0,q=n/2;j<n/2;j++,q++){
                c[p][q]=t2[i][j];
            }
        }
            cout<<endl;
        for(int i=0,p=n/2;i<n/2;i++,p++){
            for(int j=0,q=0;j<n/2;j++,q++){
                c[p][q]=t3[i][j];
            }
        }
        for(int i=0,p=n/2;i<n/2;i++,p++){
            for(int j=0,q=n/2;j<n/2;j++,q++){
                c[p][q]=t4[i][j];
            }
        }
        
    }
    return c;
}


int main(){
    int r1,c1,r2,c2;
    int size=0;
    fstream fin,fout;
    fin.open("input1.txt",ios::in);

    //Matrix 1
    fin>>r1>>c1;
    int **arr1;
    arr1=new int*[r1];
    for(int i=0;i<r1;i++){
        arr1[i]=new int[c1];
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            fin>>arr1[i][j];
        }
    }
    cout<<"Mattrix 1 :"<<endl;
    printM(arr1,r1,c1);

    //Matrix 2
    fin>>r2>>c2;
    int **arr2;
    arr2=new int*[r2];
    for(int i=0;i<r2;i++){
        arr2[i]=new int[c2];
    }
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            fin>>arr2[i][j];
        }
    }
    cout<<"Mattrix 2 :"<<endl;
    printM(arr2,r2,c2);

    // make suitable matrix
    maxsize(r1,c1,r2,c2,size);
    int **newarr1=feasibleM(arr1,r1,c1,size);
    int **newarr2=feasibleM(arr2,r2,c2,size);

    int **ans;
    if(r2==c1){
        cout<<"AFTER MULTIPLY: "<<endl;
        ans=multiplyM(newarr1,newarr2,size);
        printM(ans,r1,c2);
    }
    else{
        cout<<"Matrix Multiplication is not possible!!!"<<endl;
    }
    fin.close();

    return 0;
}
/*
INPUT1:
8 8
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1  
8 8
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1  

input2:
3 3 
1 2 3 3 4 2 3 2 1
3 3
1 1 1 3 4 2 3 2 1
ans:16 15 8 
    21 23 13 
    12 13 8 


2 3
1 2 3 4 5 6
3 2
10 11 20 21 30 31 
ans:140 146
    320 335

*/
/*
    "I have done this assignment on my own. I have not copied any code
    from another student or any online source. I understand if my code is
    found similar to somebody else's code, my case can be sent to the
    Disciplinary committee of the institute for appropriate action."

*/