#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 0, r = INT_MAX;
        bool ans = false;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            double c = 1.0;
            for (int i = 0; i < n; i++)
            {
                c *= ((a[i] * 1.0) / mid);
            }
            if (fabs(c - 1.0) < 1e-15)
            {
                ans = true;
                break;
            }
            else if (c > 1)
                l = mid + 1;
            else
                r = mid - 1;
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}