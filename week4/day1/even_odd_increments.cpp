#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        ll a[n];
        ll sum = 0, even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        for (int i = 0; i < q; i++)
        {
            ll x, y;
            cin >> x >> y;
            if (x == 0)
            {
                sum += (even * y);
                if (y % 2 == 1)
                {
                    even = 0;
                    odd = n;
                }
            }
            else
            {
                sum += (odd * y);
                if (y % 2 == 1)
                {
                    even = n;
                    odd = 0;
                }
            }
            cout << sum << endl;
        }
    }
}