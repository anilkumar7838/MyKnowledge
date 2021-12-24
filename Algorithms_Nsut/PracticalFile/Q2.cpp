/* Program 2. Implement merge sort algorithm to sort a given set of elements and determine the time required   to sort the elements. Repeat the experiment for different values of n, the number of elements in the list to be sorted and plot a graph of the time taken versus n. The elements can be read from a file or can be generated using the random number generator.
*/

#include<iostream>
#include<time.h>
#include<fstream>
using namespace std;

void Merge(int arr[],int l,int mid,int r){
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
void MergeSort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,r);

        Merge(arr,l,mid,r);
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
                fout1.open("input2.txt",ios::out);
                for(int i=0;i<n;i++){
                    fout1<<(rand()%1000+1)<<" ";
                    if(i%21 >= k-1){
                        fout1<<endl;
                    }
                }    
                fout1.close();
                fin.open("input2.txt",ios::in);
                for(int i=0;i<n;i++){
                    fin>>arr[i];
                }
                fin.close();
                MergeSort(arr,0,n-1);
                fout2.open("output2.txt",ios::out);
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
                MergeSort(arr,0,n-1);
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
    return 0;    
}
