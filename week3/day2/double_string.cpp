#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll tc;
    ll n;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        string s[n];
        map<string, bool> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            mp[s[i]] = true;
        }
        for (int i = 0; i < n; i++)
        {
            bool ok = false;
            for (int j = 1; j < s[i].length(); j++)
            {
                string a = s[i].substr(0, j), b = s[i].substr(j, s[i].length() - j);
                if (mp[a] && mp[b])
                {
                    ok = true;
                }
            }
            cout << ok;
        }
        cout << "\n";
    }
}