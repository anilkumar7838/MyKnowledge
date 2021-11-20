/*
    NAME:                   ANIL KUMAR
    ROLL NUMBER:            2020UCD2101
    CLASS AND SECTION :     CSDS 01
    MOBILE NUMBER:          7838180782
*/
#include <iostream>
#include <fstream>
using namespace std;

float maxAvg(int a[], int n)
{
    int currM = a[0], max = a[0];
    int t=0,st = 0, en = 0;
    for (int i = 1; i < n; i++)
    {
        if (currM > 0){
            currM += a[i];
        }
        else{
            currM = a[i];
            t = i;
        }
        if (currM > max){
            max = currM;
            st=t;
            en=i;
        }
    }
    // cout << st << " " << en << endl;
    cout<<"The sub weather-data: ";
    int sum=0,x=0;
    for(int i=st;i<=en;i++){
        sum+=a[i];
        cout<<a[i]<<" ";
        x++;
    }
    cout<<endl;
    return (float)sum/x;
    // return max;
}

int main()
{
    int n, *arr;
    fstream fin, fout;
    fin.open("input2.txt", ios::in);
    fin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        fin >> arr[i];
    }
    cout <<"Maximum average is: "<<maxAvg(arr, n)<<endl;
    return 0;
}
/*
    "I have done this assignment on my own. I have not copied any code
    from another student or any online source. I understand if my code is
    found similar to somebody else's code, my case can be sent to the
    Disciplinary committee of the institute for appropriate action."

*/