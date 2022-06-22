#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, c = 0;
    cin >> t;
    while (t--){
        c++;
        cout << "Case #" << c << ": ";
        long long n,x,y;
        cin >>n>>x>>y;
        long long val = 0;
        long long sum = (n * (n + 1)) / 2;
        int k=x+y;
        if ((sum % k) == 0){
            cout << "POSSIBLE" << endl;
            k=sum/k;
            y=y*k;
            sum = n;
            vector<long long> v(sum + 3);
            for (int i = 1; i <= sum; i++){
                if (i >= 1){
                    v[i-1] = i;
                }
            }
            for (int i = sum - 1; i >= 0; i--){
                if (v[i] <= y){
                    y=y-v[i];
                    v[i] = 0;
                }
            }
            for (auto it : v){
                if (it != 0) val++;
            }
            cout << val << endl;
            for (int i = 0; i < sum; ++i){
                if (v[i] > 0 || v[i] < 0){
                    cout <<i+1<< " ";
                }
            }
            cout << endl;
        }
        else
        {
            cout << "IMPOSSIBLE";
            cout << endl;
        }
    }

    return 0;
}