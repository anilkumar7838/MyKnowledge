#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool mycompare(pair<int,int> p1,pair<int,int> p2){
    return p1.first<p2.first; 
}
int main(){
    int n,s;
    cout<<"enter size then sum required respectively: ";
    cin>>n>>s;
    vector<pair<int,int>> a(n);
	cout<<"Enter the element:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a.begin(),a.end(),mycompare);
    int i=0,j=n-1,flag=0,sum=0;
    while(i<j){
        sum=(a[i].first+a[j].first);
        if(sum==s){
            flag=1;
            cout<<a[i].second<<" "<<a[j].second<<endl; 
            break;    
        }
        if(sum<s){
            i++;
        }
        else{
            j--;
        }
    }
    if(flag==0){
        cout<<"not found"<<endl;
    }
    return 0;
}
