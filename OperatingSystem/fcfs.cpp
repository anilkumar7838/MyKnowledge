#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printTable(int *arrival,int *burst,int* comp,int* tat,int *wait,int n){
    cout<<"ArrivalTime"<<"\t"<<"BurstTime"<<"\t"<<"completionTime"<<"\t"<<"TurnAroundTime"<<"\t\t"<<"waitTime"<<endl;
    for(int i=0;i<n;i++){
        cout<<arrival[i]<<"\t\t"<<burst[i]<<"\t\t"<<comp[i]<<"\t\t"<<tat[i]<<"\t\t\t"<<wait[i]<<endl;
    }
}

bool compare(pair<int,int> p1,pair<int,int> p2){
    return p1.first<p2.first;
}

int main(){
    int *arrival,*burst,*comp,*tat,*wait;
    int n;
    vector<pair<int ,int>> v;
    cout<<"This Program is based on FCFS Algo"<<endl;
    cout<<"Enter the number of Processes: ";
    cin>>n;
    for(int i=0;i<n;i++){
        arrival=new int[n];
        burst=new int[n];
        comp=new int[n];
        tat=new int[n];
        wait=new int[n];
    }

    for(int i=0;i<n;i++){
        cout<<"\nEnter Arrival Time  and Burst Time of Process "<<i+1<<":"<<endl;
        cout<<"Arrival Time: ";
        cin>>arrival[i];
        cout<<"Burst Time: ";
        cin>>burst[i];
    }

    for(int i=0;i<n;i++){
        v.push_back(make_pair(arrival[i],i));
    }
    sort(v.begin(),v.end(),compare);
    
    int prev=-1,c=1,time=0;
    for(auto p:v){
        if(p.first>time){
            time=p.first-time;
        }
        if(c==1){
            time=comp[p.second]=burst[p.second]+time;
            c--;
            prev=p.second;
            continue;
        }
        if(p.first>time){
            time=comp[p.second]=comp[prev]+burst[p.second]+time;
            
        }
        else{
            time=comp[p.second]=comp[prev]+burst[p.second];
        }
        prev=p.second;
    }

    for(int i=0;i<n;i++){
        tat[i]=comp[i]-arrival[i];
        wait[i]=tat[i]-burst[i];
    }
    cout<<endl;
    printTable(arrival,burst,comp,tat,wait,n);

    return 0;
}