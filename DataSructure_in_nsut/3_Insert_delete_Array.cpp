#include<iostream>
using namespace std;

void insertion(int arr[],int &n,int item,int pos){
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=item;
    n=n+1;
}

void deletion(int arr[],int &n,int item){
    int i=0;
    while(i<n){
        if(arr[i]==item){
            for(int j=i;j<n;j++){
                arr[j]=arr[j+1];
            }
            n=n-1;
            break;
        }
        i++;
    }   
}

int main(){
    int arr[30];
    int n,k;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the element: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    char ch;
    do{
        cout<<"************MENU**********"<<endl;
        cout<<"1.INSERATION "<<endl;
        cout<<"2.DELETION "<<endl;
        cout<<"Enter your choice: ";
        cin>>k;
        switch(k){
            case 1:{
                int pos,item;
                cout<<"Enter the element and position respectively: ";
                cin>>item>>pos;
                insertion(arr,n,item,pos);
                for(int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
                break;
            }
            case 2:{
                int item;
                cout<<"Enter the element to delete: ";
                cin>>item;
                deletion(arr,n,item);
                for(int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
                break;
            }
            default:{
                cout<<"Invalid choice!!!!"<<endl;
                break;
            }
        }
        cout<<"Do you wish to continue ? y/n: ";
        cin>>ch;
    }while(ch!='n');
return 0;
}