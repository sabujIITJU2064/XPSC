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
        string s;
        cin >> s;
        map<char, int> m;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
        }
        int ans = 0;
        for (auto u : m)
        {
            if (u.second > 0)
            {
                ans += u.second + 1;
            }
        }
        cout << ans << endl;
    }
}