#include<iostream>
#include<array>
using namespace std;
int main(){
    array <int,5> data_array1={11,22,33,44,55};
    array <int,5> data_array2={1,2,3,4,5};
    //cout<<data_array1.at(3);
    //cout<<data_array1[2];
    //cout<<data_array1.font();
    //cout<<data_array1.end();  //For more index and less initialisation gives 0 eg a[8]
    // data_array1.fill(10);
    // data_array1.swap(data_array2);
    //cout<<"Size is "<<data_array1.size();
    for(int i=0;i<=4;i++)
    cout<<data_array1[i];
    cout<<endl;
    for(int i=0;i<=4;i++)
    cout<<data_array2[i];
}
