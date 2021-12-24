/* Program 1. Sort a given set of elements using the quick sort method and determine the time required to sort the elements. Repeat the experiment for different values of n, the number of elements in the 1st to be sorted and plot a graph of the time taken versus n. The elements can be read from a file or can be generated using the random number generator.
*/

#include <iostream>
#include <time.h>
#include<fstream>

using namespace std;

void swap(int arr[],int a,int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

int partition(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,(i+1),r);
    return i+1;
} 

void Quicksort(int arr[],int l,int r){
    if(l<r){
        int pi=partition(arr,l,r);
        Quicksort(arr,l,pi-1);
        Quicksort(arr,pi+1,r);
    }
}

void printArray(int arr[],int n){
    int k=21;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        if(i%21 >= k-1){
            cout<<endl;
        }
    }
    cout<<endl;
}

int main()
{
    int n,*arr; 
    srand(time(0));
    cout<<"Enter the number of elements(1 to 1000000): "; 
    cin>>n;
    // n=1000000;
    // n=10;
    arr=new int[n];
    // Quicksort(arr,0,n-1);

    int x,k=21;
    char ch;
    do{
        cout<<"******Enter the choice of mode*******"<<endl;
        cout<<"1. FileInput"<<endl;
        cout<<"2. RandomInput"<<endl;
        cout<<"Enter your choice: ";
        cin>>x;

        switch(x){
            case  1:{
                fstream fin,fout1,fout2;
                fout1.open("input1.txt",ios::out);
                for(int i=0;i<n;i++){
                    fout1<<(rand()%1000+1)<<" ";
                    if(i%21 >= k-1){
                        fout1<<endl;
                    }
                }    
                fout1.close();
                fin.open("input1.txt",ios::in);
                for(int i=0;i<n;i++){
                    fin>>arr[i];
                }
                fin.close();
                Quicksort(arr,0,n-1);
                fout2.open("output1.txt",ios::out);
                for(int i=0;i<n;i++){
                    fout2<<arr[i]<<" ";
                    if(i%21 >= k-1){
                        fout2<<endl;
                    }
                }
                fout2.close();
                break;
            }
            case 2:{
                for(int i=0;i<n;i++){
                    arr[i]=rand()%1000+1;
                }
                // cout<<"Before Sorting: "<<endl;
                // printArray(arr,n);
                Quicksort(arr,0,n-1);
                cout<<"After Sorting: "<<endl;
                printArray(arr,n);
                break;
            }
            default: {
                cout<<"Invalid choice!!"<<endl;
                break;
            }
        }
        cout<<"Do you wish to continue (y/n): ";
        cin>>ch;
    }while(ch!='n');
   
}