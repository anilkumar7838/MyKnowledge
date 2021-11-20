/*
    NAME:                   ANIL KUMAR
    ROLL NUMBER:            2020UCD2101
    CLASS AND SECTION :     CSDS 01
    MOBILE NUMBER:          7838180782
*/

//************ Efficient algorithm ************
// using Array
#include<iostream>
#include<fstream>
using namespace std;

int PWC(int *arr,int n,int &count){
    int lt=0,rt=n;
    while(lt<=rt){
        int mid=(lt+rt)/2;
        count++;
        if(arr[mid-1]<arr[mid] and arr[mid+1]<arr[mid]){
            return arr[mid];
        }
        else if(arr[mid-1]>arr[mid]){
            rt=mid-1;
        }
        else if(arr[mid+1]>arr[mid]){
            lt=mid+1;
        }
    }
    return -1;
}

int main(){
    int n,i=0,ele,count=0;
    int *Day;
    fstream fin,fout;
    fin.open("input.txt",ios::in);
    fin>>n;
    Day=new int[n];
    while(n--){
        fin>>ele;
        Day[i]=ele;
        i++;
    }
    fout.open("output.txt",ios::out);
    ele=PWC(Day,i-1,count);
    fout<<ele<<endl;
    fout<<"Number of Comparsion is: "<<count<<endl;
    fin.close();
    fout.close();
    return 0;
}

/*

input 1: 
5
2 4 6 5 9
input 2: 
7
15 25 20 7 28 95 72

*/

/*
    "I have done this assignment on my own. I have not copied any code
    from another student or any online source. I understand if my code is
    found similar to somebody else's code, my case can be sent to the
    Disciplinary committee of the institute for appropriate action."

*/