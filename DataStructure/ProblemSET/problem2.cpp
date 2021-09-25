#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool reachDestination(int sx, int sy, int dx, int dy) {
    // Write your code here
    static bool ans =false;
    if(sx>dx || sy>dy){
        return false;
    }
    ans= reachDestination(sx+sy,sy,dx,dy)||reachDestination(sx,sx+sy,dx,dy);
    if(sx==dx and sy==dy){
        return true;
    }
    return ans;
}
// #include "solution.h"
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int a,b,c,d;
        cin >> a>> b>> c>> d;

        
        if(reachDestination(a,b,c,d)){
            cout<< "true" << endl;
        }
        else{
            cout << "false" << endl;
        }
    }
}