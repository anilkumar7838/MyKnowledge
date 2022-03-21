#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

void printTable(int *arrival,int *burst,int* comp,int* tat,int *wait,int n){
    cout<<"ArrivalTime"<<"\t"<<"BurstTime"<<"\t"<<"completionTime"<<"\t"<<"TurnAroundTime"<<"\t\t"<<"waitTime"<<endl;
    for(int i=0;i<n;i++){
        cout<<arrival[i]<<"\t\t"<<burst[i]<<"\t\t"<<comp[i]<<"\t\t"<<tat[i]<<"\t\t\t"<<wait[i]<<endl;
    }
}

bool compare(pair<int,pair<int ,int>> p1,pair<int,pair<int,int>> p2){
    return p1.first<p2.first || p1.second.first<p2.second.first;
}

int main(){
    int *arrival,*burst,*comp,*tat,*wait;
    int n;
    vector<pair<int ,pair<int,int>>> v;
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
        v.push_back(make_pair(arrival[i],make_pair(burst[i],i)));
    }
    sort(v.begin(),v.end(),compare);
    
    int prev=-1,c=1,time=0;

    for(auto p:v){
        if(p.first>time){
            time=p.first-time;
        }
        if(c==1){
            time=comp[p.second.second]=burst[p.second.second]+time;
            c--;
            prev=p.second.second;
            continue;
        }
        if(p.first>time){
            time=comp[p.second.second]=comp[prev]+burst[p.second.second]+time; 
        }
        else{
            time=comp[p.second.second]=comp[prev]+burst[p.second.second];
        }
        prev=p.second.second;
    }

    for(int i=0;i<n;i++){
        tat[i]=comp[i]-arrival[i];
        wait[i]=tat[i]-burst[i];
    }
    cout<<endl;
    printTable(arrival,burst,comp,tat,wait,n);

    return 0;
}


// wrong Answer
// This Program is based on FCFS Algo
// Enter the number of Processes: 3

// Enter Arrival Time  and Burst Time of Process 1:
// Arrival Time: 4
// Burst Time: 1

// Enter Arrival Time  and Burst Time of Process 2:
// Arrival Time: 0
// Burst Time: 5

// Enter Arrival Time  and Burst Time of Process 3:
// Arrival Time: 3
// Burst Time: 4

// ArrivalTime     BurstTime       completionTime  TurnAroundTime          waitTime

// Enter Arrival Time  and Burst Time of Process 3:
// Arrival Time: 3
// Burst Time: 4

// Enter Arrival Time  and Burst Time of Process 4:
// Arrival Time: 2
// Burst Time: 3

// ArrivalTime     BurstTime       completionTime  TurnAroundTime          waitTime
// 4               1               15              11                      10
// 1               5               14              13                      8
// 3               4               9               6                       2
// 2               3               5               3                       0 