#include <bits/stdc++.h> 
using namespace std; 
  
void towerOfHanoi(int n, char s,char a, char d)  
{  
    if (n == 1)  
    {  
        cout << "Move disk 1 from rod " << s <<" to rod " << d<<endl;  
        return;  
    }  
    towerOfHanoi(n - 1, s, d, a);  
    cout << "Move disk " << n << " from rod " << s <<" to rod " << d << endl;  
    towerOfHanoi(n - 1, a, s, d);  
}  
  
// Driver code 
int main()  
{  
    int n = 5; // Number of disks  
    towerOfHanoi(n, 'A', 'B', 'C'); // A, B and C are names of rods  
    return 0;  
}
