//brute force
#include <iostream>
using namespace std;

int larger(int a[], int n)
{
    int maxterm = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (maxterm < a[i])
        {
            maxterm = a[i];
        }
    }
    return maxterm;
}

int main()
{
    int n, k;
    int *a, *b, *c;
    cout << "Enter the size: ";
    cin >> n;
    a = new int[n];
    cout << "Enter the window size: ";
    cin >> k;
    b = new int[k];
    c = new int[n - k + 1];
    cout << "Enter the element: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - k + 1; i++)
    { //O(nm)
        int count = i;
        for (int j = 0; j < k; j++)
        {
            b[j] = a[count++];
        }
        c[i] = larger(b, k);
    }
    for (int i = 0; i < n - k + 1; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
    return 0;
}