#include<iostream>
#include<cstring>
using namespace std;

int main()
{
 string str[20],a[20],temp;
 int i,j,n,k=1,m=0;
 cout<<"enter the size"<<endl;
 cin>>n;
 cout<<"enter the element"<<endl;
  for(i=1;i<=n;i++)
 {
     cin>>str[i];
 }
  for(i=1;i<=n;i++)
       {
           a[i]=str[i];
       }

 cout<<"the possible combination is:"<<endl;
 for(k=1;k<=n;k++)
 {
     m=0;
   while(m<(n-1))
  {
    for(j=2;j<n;j++)
    {
       temp = str[j];
       str[j]=str[j+1];
       str[j+1]=temp;

           for(i=1;i<=n;i++)
         {
           cout<<str[i]<<" ";
         }
       cout<<endl;

     }
     m++;
  }
       for(i=1;i<=n;i++)
       {
           str[i]=a[i];
       }
      temp= str[1];
      str[1]=str[k+1];
      str[k+1]=temp;
 }
    return 0;
}






