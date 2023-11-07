#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, h;
        cin >> n >> m >> h;
        ll a[n];
        ll b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        sort(a, a + n, greater<ll>());
        sort(b, b + m, greater<ll>());
        ll ans = 0;
        ll x = min(n, m);
        for (int i = 0; i < x; i++)
        {
            ans += min(a[i], b[i] * h);
        }
        cout<< ans<<endl;
    }
}