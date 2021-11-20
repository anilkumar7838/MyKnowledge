#include<iostream>
#include<cstring>
using namespace std;
//Complexity: O(mn);
int stringCompare(string str1,string str2){
	int m=str1.length();
	int n=str2.length();
	for(int i=0;i<m;i++){
		int j=0,idx=i;
		while(str1[idx]==str2[j]){
			if(j==n-1){
				return 1;
			}
			j++;
			idx++;
		}
	}
	cout<<endl;
	return 0;
}

//Complexity: O(m+n)
int KMP(string str1,string str2){
	int m=str1.length();
	int n=str2.length();
	int arr[n]={0},k=0;
	arr[0]=0;
	
	int i=1;
	while(i<n){				//O(n)	
		if(str2[i]==str2[k]){
			k++;
			arr[i]=k;
			i++;
		}
		else{
			if(k>0){
				k=arr[k-1];
			}
			else{
				i++;
			}
		}
	}

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;

	int j=0;
	for(int i=0;i<m;i++){   //O(m)
		int idx=i;
		while(str1[idx]==str2[j]){
			if(j==n-1){
				return 1;
			}
			j++;
			idx++;
		}
		if(j!=0){
			j=arr[j-1];
		}
	}
	return 0;
}

int main(){
	// string str1="My name is AnilKumar",str2="Kumar";
	string str1="ababcabcabababd",str2="ababdabd";
	// cout<<stringCompare(str1,str2)<<endl;
	cout<<KMP(str1,str2)<<endl;
}