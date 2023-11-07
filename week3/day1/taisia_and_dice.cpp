#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll ans = b - c;
        cout << ans << " ";
        for (int i = 2; i <= a; i++)
        {
            while (c -ans < a - i)
                ans--;
            cout << ans << " ";
            c = c - ans;
        }
        cout << endl;
    }
}
