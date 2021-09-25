#include<iostream>
using namespace std;

bool ispower_of_2(int n){
    return (!((n&(n-1))&n));
}

int main(){
    cout<<ispower_of_2(12)<<endl;
    cout<<ispower_of_2(16)<<endl;
    return 0;
}