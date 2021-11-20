/*
    NAME:                   ANIL KUMAR
    ROLL NUMBER:            2020UCD2101
    CLASS AND SECTION :     CSDS 01
    MOBILE NUMBER:          7838180782
*/
//Time Compexity : O(nlogn)
#include<iostream>
#include<fstream>

using namespace std;

void merge(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 and j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;
        }
        else{
            arr[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=b[j];
        j++;
        k++;
    }
}
void min_max(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        min_max(arr,l,mid);
        min_max(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}
int main(){
    int n;
    int *a;
    fstream fin,fout;
    fin.open("input1.txt",ios::in);
    fin>>n;
    a=new int[n];
    for(int i=0;i<n;i++){
        fin>>a[i];
    }
    cout<<"Blood Pressure is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    min_max(a,0,n-1);
    cout<<endl;
    cout<<"Minimum Blood Pressure: "<<a[0]<<endl;
    cout<<"Maximum Blood Pressure: "<<a[n-1]<<endl;
    cout<<endl;
    fin.close();
return 0;
}
/*
    "I have done this assignment on my own. I have not copied any code
    from another student or any online source. I understand if my code is
    found similar to somebody else's code, my case can be sent to the
    Disciplinary committee of the institute for appropriate action."

*/