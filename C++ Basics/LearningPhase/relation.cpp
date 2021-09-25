#include <iostream>
using namespace std;
class relation
{
public:
    char a;
    char b;
};
bool check(char a[], int n, char element)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == element)
            return true;
    }
    return false;
}
bool reflexive(relation a[], char b[], int num, int n)
{
    int i, j;
    bool ans = false;
    for (i = 0; i < n; i++)
    {
        ans = false;
        for (j = 0; j < num; j++)
        {
            if ((b[i] == a[j].a) && (b[i] == a[j].b))
            {
                ans = true;
                break;
            }
        }
        if (ans == false)
        {
            return ans;
        }
    }
    return ans;
}
bool symmetric(relation a[], int num)
{
    int i, j;
    bool ans = false;
    for (i = 0; i < num; i++)
    {
        ans = false;
        for (j = 0; j < num; j++)
        {
            if ((a[i].b == a[j].a) && (a[i].a == a[j].b))
            {
                ans = true;
                break;
            }
        }
        if (ans == false)
        {
            return ans;
        }
    }
    return ans;
}
bool antisymmetric(relation a[], int num)
{
    int i, j;
    bool ans = false;
    for (i = 0; i < num; i++)
    {
        ans = false;
        for (j = 0; j < num; j++)
        {
            if ((a[i].b == a[j].a) && (a[i].a == a[j].b))
            {
                if (a[i].a == a[i].b)
                {
                    ans = true;
                    break;
                }
            }
        }
        if (ans == false)
        {
            return ans;
        }
    }
    return ans;
}
bool search(relation a[], int num, char x, char y)
{
    int i;
    for (i = 0; i < num; i++)
    {
        if ((a[i].a == x) && (a[i].b == y))
        {
            return true;
        }
    }
    return false;
}
bool transitive(relation a[], int num)
{
    int i, j;
    bool ans = true;
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            if (a[i].b == a[j].a)
            {
                ans = search(a, num, a[i].a, a[j].b);
                if (ans == true)
                {
                    break;
                }
            }
        }
        if (ans == false)
        {
            return false;
        }
    }
    return true;
}
bool equivalence(relation a[], char b[], int num, int n)
{
    if (reflexive(a, b, num, n) && symmetric(a, num) && transitive(a, num))
    {
        return true;
    }
    return false;
}
bool poset(relation a[], char b[], int num, int n)
{
    if (reflexive(a, b, num, n) && antisymmetric(a, num) && transitive(a, num))
    {
        return true;
    }
    return false;
}
int main()
{
    int n, i;
    cout << "Enter the cardinality of set:";
    cin >> n;
    char set[n];
    cout << "Enter the distict elements of set" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> set[i];
    }
    cout << "The set entered is" << endl;
    cout << "{";
    for (i = 0; i < n - 1; i++)
    {
        cout << set[i] << " , ";
    }
    cout << set[i];
    cout << "}" << endl;
    int num;
    cout << "Enter the number of elements in relation:";
    cin >> num;
    relation r[num];
    cout << "enter the ordered pairs of relation" << endl;
    for (i = 0; i < num; i++)
    {
        cin >> r[i].a;
        if (check(set, n, r[i].a) != true)
        {
            cout << "\nInvalid input";
            exit(1);
        }
        cin >> r[i].b;
        if (check(set, n, r[i].b) != true)
        {
            cout << "\nInvalid input";
            exit(1);
        }
    }
    cout << "The relation entered is" << endl;
    cout << "{";
    for (i = 0; i < num; i++)
    {
        cout << "(" << r[i].a << " , " << r[i].b << ")"
             << " ";
    }
    cout << "}" << endl;
    if (reflexive(r, set, num, n))
        cout << "The relation is reflexive" << endl;
    else
    {
        cout << "The relation is not reflexive" << endl;
    }
    if (symmetric(r, num))
        cout << "The relation is symmetric" << endl;
    else
    {
        cout << "The relation is not symmetric" << endl;
    }
    if (antisymmetric(r, num))
        cout << "The relation is antisymmetric" << endl;
    else
    {
        cout << "The relation is not antisymmetric" << endl;
    }
    if (transitive(r, num))
        cout << "The relation is transitive" << endl;
    else
    {
        cout << "The relation is not transitive" << endl;
    }
    if (equivalence(r, set, num, n))
        cout << "The relation is equivalence" << endl;
    else
    {
        cout << "The relation is not equivalence" << endl;
    }
    if (poset(r, set, num, n))
        cout << "The relation is poset" << endl;
    else
    {
        cout << "The relation is not poset" << endl;
    }

    return 0;
}
