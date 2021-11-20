
// recursive and memoization
#include <iostream>
#include <cstring>
using namespace std;
int memo[100][100], cnt1 = 0, cnt2 = 0;

int editTxt(string str1, string str2, int m, int n)
{
    // cnt1++;
    if (n == 0){
        return m;
    }
    if (m == 0){
        return n;
    }
    if (str1[m - 1] == str2[n - 1]){
        return editTxt(str1, str2, m - 1, n - 1);
    }

    return (1 + min(editTxt(str1, str2, m - 1, n), min(editTxt(str1, str2, m, n - 1), editTxt(str1, str2, m - 1, n - 1))));
}

// TO-DO
int editTxtM(string str1, string str2, int m, int n)
{
    // cout<<m<<" "<<n<<endl;
    // memo[0][0]=0;
    if (memo[m][n] != -1){
        return memo[m][n];
    }
    if (n == 0){
        // cout<<"*";
        return m;
    }
    if (m == 0){
        // cout<<"#";
        return n;
    }

    cout<<str1[m - 1]<<" "<<str2[n - 1]<<endl;
    if (str1[m - 1] == str2[n - 1]){
        if (memo[m - 1][n - 1] != -1){
            memo[m][n]=memo[m-1][n-1];
            return memo[m][n]; 
        }
        else{
            memo[m][n] = editTxtM(str1, str2, m - 1, n - 1);
            return memo[m][n]; 
        }
    }
    else{
        int q1, q2, q3;
        //deletion
        if (memo[m][n - 1] != -1){
            q1 = memo[m][n - 1];
        }
        else{
            q1 = editTxtM(str1, str2, m, n - 1);
        }
        //insertion
        if (memo[m - 1][n] != -1){
            q2 = memo[m - 1][n];
        }
        else{
            q2 = editTxtM(str1, str2, m - 1, n);
        }
        // Replace
        if (memo[m][n - 1] != -1){
            q3 = memo[m - 1][n - 1];
        }
        else{
            q3 = editTxtM(str1, str2, m - 1, n - 1);
        }
        memo[m][n] = 1 + min(q1, min(q2, q3));
        return memo[m][n];  
    }
}

// int editDist(int i,int j,string s1,string s2){
//     if(memo[i][j]==-1){
//         return memo[i][j];
//     }
//     if(i==s1.size()){
//         return s2.size()-j;
//     }
//     if(j==s2.size()){
//         return s1.size()-i;
//     }
//     if(s1[i]==s2[j]){
//         return memo[i][j]=editDist(i+1,j+1,s1,s2);
//     }
//     else{
//         int left=1+editDist(i,j+1,s1,s2);
//         int mid=1+editDist(i+1,j,s1,s2);
//         int right=1+editDist(i+1,j+1,s1,s2);
//         return memo[i][j]=min(left,min(right,mid));
//     }
// }

int main()
{
    string str1="sunday",str2="saturday";
    // string str1 = "voldemort";
    // string str2 = "dumbledore";

    int m = str1.length();
    int n = str2.length();

    // cout << "Ans: " << editTxt(str1, str2, m, n) << endl;
    for (int i = 0; i <= m; i++){
        for (int j = 0; j <= n; j++){   
            if(i==0 and j==0){
                memo[i][j]=0;
            }
            else{
                memo[i][j] = -1;
            }
        }
    }
    cout << "Ans: " << editTxtM(str1, str2, str1.length(), str2.length()) << endl;
    // cout << "Ans: " << editDist(str1.length()-1, str2.length()-1,str1,str2) << endl;
    
    // for (int i = 0; i <= m; i++){
    //     for (int j = 0; j <= n; j++){
    //         cout << memo[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}