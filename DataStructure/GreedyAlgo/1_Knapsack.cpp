// for partial
#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;

int cmp(pair<int,int> p1 ,pair<int,int> p2){
    double a=p1.first/p1.second;
    double b=p2.first/p2.second;
    return a>b;
}

double maxProfit(vector<pair<int,int>> v ,int k){
    int n=v.size();
    sort(v.begin(),v.end(),cmp);
    double sum=0;
    for(int i=0;i<n;i++){
        if(k<=0){
            return sum;
        }
        else{
            if(k<v[i].second){
                sum+=(double)k/v[i].second*v[i].first;
                k-=k;
                return sum;
            }
            sum+=v[i].first;
            k-=v[i].second;
        }
    }
    return sum;
} 

int main(){

    int n,k,ft,sec;
    vector<pair<int,int>> v;
    fstream fin;
    fin.open("input1.txt",ios::in);
    fin>>n>>k;
    for(int i=0;i<n;i++){
        fin>>ft;
        fin>>sec;
        v.push_back(make_pair(ft,sec));
    }
    cout<<maxProfit(v,k)<<endl;
    return 0;
}