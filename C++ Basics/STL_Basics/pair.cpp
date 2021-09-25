#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool mycompare(pair<int,int>p1,pair<int,int>p2){
	return p1.first<p2.first;
}

int main()
{
//	pair<int ,char> p;
//	p.first=3;
//	p.second='f';
//	cout<<"Pair is: "<<p.first<<","<<p.second<<endl;
	int arr[]={10,14,2,3,6,4,7,32,21};
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	vector<pair<int,int>> v;
		
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		v.push_back(make_pair(arr[i],i));
	}
	sort(v.begin(),v.end(),mycompare);
	for(int i=0;i<v.size();i++){
		arr[v[i].second]=i;
	}
	for(int i=0;i<v.size();i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}                                        
