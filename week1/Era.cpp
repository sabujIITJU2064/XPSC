#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n], i;

        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        int mx = 0;

        for (i = 1; i <= n; i++)
        {
            mx = max(mx, a[i] - i);
        }
        cout << mx << endl;
    }
}