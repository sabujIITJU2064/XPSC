#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        bool flag = false;
        for (int i = 0; i < n-2; i++)
        {
            if (a[i] == a[i + 1] && a[i] == a[i + 2])
            {
                flag = true;
                cout << a[i] << endl;
                break;
            }
        }
        if (flag == false)
        {
            cout << -1 << endl;
        }
    }
}