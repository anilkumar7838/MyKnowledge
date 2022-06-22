#include <iostream> 
using namespace std;
int main()
{
    int n, m, i, j, k;
    cout << "Enter number of Processes: "; // 5 
    cin>>n;
    cout << "Enter number of Resources: "; // 3
    cin>>m;
    int alloc[n][m];
    i = 0;
    j = 0;
    while (i < n)
    {
        cout << "Enter the allocation for " << i + 1 << " Process: ";
        while (j < m)
        {
            cin >> alloc[i][j];
            j++;
        }
        i++;
        j = 0;
    }
    int max[n][m];
    i = 0;
    j = 0;
    while (i < n)
    {
        cout << "Enter the MAX allocation for " << i + 1 << " Process: ";
        while (j < m)
        {
            cin >> max[i][j];
            j++;
        }
        i++;
        j = 0;
    }
    int avail[m]; //{ 3, 3, 2 }
    cout << "Enter Available Units of Resources: ";
    for (i = 0; i < m; i++)
    {
        cin >> avail[i];
    }
    // BANKERS ALGORITHM
    int f[n], ans[n], ind = 0;
    for (k = 0; k < n; k++)
    {
        f[k] = 0;
    }
    int need[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            need[i][j] = max[i][j] - alloc[i][j];
    }
    int y = 0;
    for (k = 0; k < 5; k++)
    {
        for (i = 0; i < n; i++)
        {
            if (f[i] == 0)
            {
                int flag = 0;
                for (j = 0; j < m; j++)
                {
                    if (need[i][j] > avail[j])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    ans[ind++] = i;
                    for (y = 0; y < m; y++)
                        avail[y] += alloc[i][y];
                    f[i] = 1;
                }
            }
        }
    }
    cout << "Following is the required Sequence" << endl;
    for (i = 0; i < n - 1; i++)
        cout << " P" << ans[i] << " ->";
    cout << " P" << ans[n - 1] << endl;
    return (0);
}
