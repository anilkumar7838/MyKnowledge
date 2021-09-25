#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<fstream>
using namespace std;

// ---------Linear Search----------
int linearSearch(int arr[],int n,int x,int &count){
    for(int i=0;i<n;i++){
        count++;
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

// ------------Sorting------------
void sortArray(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int key=arr[i];
        while(j>=0 and key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

// -------------Binary Search--------------
int binarySearch(int arr[],int first,int last,int x,int &count){
    while(first<=last){
        count++;
        int mid=(first+last)/2;
        if(x>arr[mid]){
            return binarySearch(arr,mid+1,last,x,count);
        }
        if(x<arr[mid]){
            return binarySearch(arr,first,mid-1,x,count);
        }
        if(x==arr[mid]){
            return mid;
        }
    }
    return -1;
}


// -------------PrintLinear----------
void printLinear(int arr[],int n,int ele[],int num){
    cout<<"************LINEAR SEARCH**************"<<endl;
    cout<<"Enteries for LinearSearch: ";
    for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans=0;
    for(int i=0;i<num;i++){
        int count=0;
       int ans=linearSearch(arr,n,ele[i],count);
        if(ans!=-1){
            cout<<"The Element "<<ele[i]<<" is found at position: "<<ans+1<<" in "<<count<<" comparison"<<endl;
        }
        else{
            cout<<"The Element "<<ele[i]<<" is not found!!! "<<" in "<<count<<" comparison"<<endl;
        } 
    }
    cout<<"\n"<<endl;
}

// ------------PrintBinary------------
void printBinary(int arr[],int n,int ele[],int num){
    cout<<"************BINARY SEARCH**************"<<endl;
    sortArray(arr,n);
    cout<<"New Enteries for BinarySearch: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans=0;
    for(int i=0;i<num;i++){
        int count=0;
        ans=binarySearch(arr,0,n-1,ele[i],count);
        if(ans!=-1){
            cout<<"The Element "<<ele[i]<<" is found at position: "<<ans+1<<" in "<<count<<" comparison"<<endl;
        }
        else{
            cout<<"The Element "<<ele[i]<<" is not found!!! "<<" in "<<count<<" comparison"<<endl;
        } 
    }
    cout<<"\n"<<endl;
}
int main(){
    int n,num;
    int ele[6];
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    // --------------File----------------
    fstream fin,fout;

    // Reset file
    fout.open("input.txt",ios::out);
    fout<<"";
    fout.close();

    // write
    int count=0;
    srand(time(0));
    fout.open("input.txt",ios::app);
    while( count<n and fout<<((rand()%100) +1)<<" "){
        count++;
    }
    fout.close();

    // read
    fin.open("input.txt",ios::in);
    int j=0;
    while(j<n and fin>>arr[j]){
        // cout<<arr[j]<<" ";
        j++;
    }
    fin.close();

    cout<<"Enteries: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the number of element to find (1-5): ";
    cin>>num;

    while(1>num || num>5){
        cout<<"Enter valid  number please!!!"<<endl;
        cout<<"Enter the number of element to find (1-5): ";
        cin>>num;
    }
    cout<<"Enter the elements you want to find: ";
    for(int i=0;i<num;i++){
        cin>>ele[i];
    }
    printLinear(arr,n,ele,num);
    printBinary(arr,n,ele,num);

    // WorstCase
    int find=arr[n-1];
    int counter=0;
    cout<<"LinearSearch: "<<endl;
    int ans=linearSearch(arr,n,find,counter);
        if(ans!=-1){
            cout<<"The Element in WorstCase "<<find<<" is found at position: "<<ans+1<<" in "<<counter<<" comparison\n"<<endl;
        }
        else{
            cout<<"The Element in WorstCase "<<find<<" is not found!!! "<<" in "<<counter<<" comparison"<<endl;
        }
    cout<<"BinarySearch: "<<endl;
    counter=0;
    ans=binarySearch(arr,0,n-1,find,counter);
        if(ans!=-1){
            cout<<"The Element in WorstCase "<<find<<" is found at position: "<<ans+1<<" in "<<counter<<" comparison\n"<<endl;
        }
        else{
            cout<<"The Element in WorstCase "<<find<<" is not found!!! "<<" in "<<counter<<" comparison"<<endl;
        } 
    return 0;
}