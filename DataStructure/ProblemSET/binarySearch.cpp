//binary Search using pair for unsorted array
#include<iostream>
#include<algorithm>
using namespace std;

void binarySearch(vector<pair<int,int>> v){
    int x,first=0,last=v.size()-1,count=0,mid;
    cout<<"Enter the element you want to find: ";
    cin>>x;
    while(first<=last){
        mid=(first+last)/2;
        if(v[mid].first>x){
            last=mid-1;
        }
        if(v[mid].first<x){
            first=mid+1;
        }
        if(v[mid].first==x){
            count++;
            break;
        }
    }
    if(count){
        cout<<"The element "<<v[mid].first<<" is found at position: "<<v[mid].second+1;
    }
    else{
        cout<<"The element is not found"<<endl;
    }
}
bool mycompare(pair<int,int> p1,pair<int,int> p2){
	return p1.first<p2.first;
}
int main(){
    int *a,n;
    cout<<"Enter the size of a array: ";
    cin>>n;
    a=new int[n];
//    cout<<"Enter the Sorted elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
    		v.push_back(make_pair(a[i],i));
    }
    sort(v.begin(),v.end(),mycompare);
    binarySearch(v);
}
