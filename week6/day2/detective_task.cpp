#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        s = '1' + s + '0';
        int cnt1 = 0, cnt2 = n + 1;
        for (ll i = 1; i <= n; i++)
        {
            if (s[i] == '1')
            {
                cnt1 = i;
            }
            if (s[i] == '0')
            {
                cnt2 = i;
                break;
            }
        }
        cout << min(cnt2, n) - max(cnt1, 1) + 1 << endl;
    }
}