#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;

bool cmp(pair<int,int>p1,pair<int,int> p2){
    return p1.first>p2.first;
}

double jobSequence(vector<pair<int,int>> v){
    sort(v.begin(),v.end(),cmp);
    int j=0,n=v.size(),tr=0;
    double ans=0,arr[n]={0};

    for(int i=0;i<n;i++){
        tr=max(v[i].second,tr);
    }
    // cout<<tr<<endl;
    for(int i=0;i<n;i++){
        j=v[i].second-1;
        int check=1;
        while(check){
            if(arr[j]==0){
                ans+=v[i].first;
                tr--;
                arr[j]=1;
                break;
            }
            else{
                j--;
            }
            if(j<0){
                check=0;
            }
        }
        if(tr==0){
            return ans;
        }
    }
}

int main(){
    int n,a,b;
    fstream fin;
    fin.open("input2.txt",ios::in);
    fin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        fin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    cout<<jobSequence(v)<<endl;
    
    return 0;
}