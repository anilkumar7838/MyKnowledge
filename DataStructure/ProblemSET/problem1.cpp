#include<bits/stdc++.h>
using namespace std;

// void Swap(int *i,int *j){
//     int temp=i;
//     i=j;
//     j=temp;
// }
int check(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            return i+1;
        }
    }
}
int Output(string str){
    int i=0;
    int arr[]={1,0,0};
    int p=0,q=1,r=2;
	while(str[i]!='\0'){
    	if(str[i]=='A'){
            swap(arr[p],arr[q]);
        }   
        else if(str[i]=='B'){
            swap(arr[q],arr[r]);
        }
        else if(str[i]=='C'){
            swap(arr[p],arr[r]);
        }
        else{
            return -1;
        }
        i++;
    }    
    return check(arr,3);
}

int main() {
    string str="";
	cin>>str;
    cout<<Output(str)<<endl;
	return 0;
}