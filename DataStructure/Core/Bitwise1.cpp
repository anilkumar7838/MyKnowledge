#include<iostream>
using namespace std;

int getBit(int n,int pos){   // GET THE BIT AT POSITION
    return ((n&(1<<pos))!=0);
}

int setBit(int n,int pos){    // SET THE BIT =1 AT POSITION
    return (n|(1<<pos));
}

int clearBit(int n,int pos){   // CLEAR THE BIT AT POSITION
    int mask=(~(1<<pos));
    return (mask&n);
}

int updateBit(int n,int pos,int val){  //UPDATE THE BIT EITHER 1 OR 0 AS REQUESTED
    int value=n&(~(1<<pos));
    return value|(val<<pos);
}

int main(){
    // int pos=0;
    // cout<<(1<<pos)<<endl;
    // pos=1;
    // cout<<(1<<pos)<<endl;
    // pos=2;
    // cout<<(1<<pos)<<endl;
    // pos=3;
    // cout<<(1<<pos)<<endl;
    int bit=getBit(5,2);
    cout<<bit<<endl;
    bit=setBit(5,1);
    cout<<bit<<endl;
    bit=clearBit(5,0);
    cout<<bit<<endl;
    bit=updateBit(5,2,0);
    cout<<bit<<endl;
    return 0;
}