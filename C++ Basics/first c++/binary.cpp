#include <iostream>
#include <algorithm>
using namespace std;
bool binaryrecursive(int a[], int l, int r, int x)
{
    int mid = (l + r) / 2;
    if (l <= r)
    {
        if (a[mid] == x)
            return true;
        else if (a[mid] > x)
        {
            return binaryrecursive(a, l, mid - 1, x);
        }
        else
        {
            return binaryrecursive(a, mid + 1, r, x);
        }
    }
    return false;
}
bool binaryiterative(int a[], int n, int x)
{
    int first = 0, last = n - 1;
    int mid = (first + last) / 2;
    while (first <= last)
    {
        if (a[mid] > x)
        {
            last = mid - 1;
        }
        else if (a[mid] < x)
        {
            first = mid + 1;
        }
        else
        {
            return true;
        }
        mid = (first + last) / 2;
    }
    return false;
}
int main()
{
    int size, element;
    bool ans;
    cout << "enter the size:";
    cin >> size;
    int *a = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    sort(a, a + size);
    cout << "enter the element you want to search:";
    cin >> element;
    int cas;
    cout << "enter 1 for recursive and 2 for iterative:";
    cin >> cas;
    if (cas == 1)
    {
        ans = binaryrecursive(a, 0, size - 1, element);
        cout << "\nanswer:" << ans;
    }
    else if (cas == 2)
    {
        ans = binaryiterative(a, size, element);
        cout << "\nanswer:" << ans;
    }
    else
    {
        cout << "command invalid!!!";
    }
    return 0;
}