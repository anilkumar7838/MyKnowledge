#include<iostream>
using namespace std;

// int length(int arr[][],int i,int j){

// }

int checkLShaped(int arr[41][41],int i,int j){
    if(arr[i+1][j]==1){

    }
    if(arr[i][j+1]==1){

    }
}

int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        c++;
        cout<<"Case #"<<c<<": ";
        int r,c,arr[41][41];
        cin>>r>>c;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>arr[i][j];
            }
        }
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(arr[i][j]==1){
                    if(arr[i+1][j]==1){

                    }
                    if(arr[i][j+1]==1){

                    }
                }
            }
        }

    }
    return 0;
}