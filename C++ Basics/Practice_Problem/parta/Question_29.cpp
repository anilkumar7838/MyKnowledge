// find postion of given elements in an array
#include<iostream>
using namespace std;
int main()
{
	int arr[20],n,i,num,pos,flag=0;
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter elements of array:";
	for(i=0;i<n;i++)
	cin>>arr[i];
    cout<<"Enter elements whose position to be find:";
    cin>>num;
    for(i=0;i<n;i++)
    {
    	if(num==arr[i])
    	{
    		flag=1;
    		pos=i+1;
    		break;
		}
	}
	if(flag==1)
	cout<<"Given element is at "<<pos<<" position";
	else 
	cout<<"Given element is not in array";
	return 0;
	
}
