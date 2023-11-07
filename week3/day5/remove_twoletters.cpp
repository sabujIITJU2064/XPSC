#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mpp;
        ll ans = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i - 1] == s[i + 1])
                continue;
            else
                ans++;
        }
        cout << ans+1 << endl;
    }
}