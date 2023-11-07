#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        if (c == 'g')
            cout << "0" << endl;
        else
        {
            int ans = 0;
            s += s;
            vector<int> g;
            for (int i = 0; i < 2 * n; i++)
            {
                if (s[i] == 'g')
                    g.push_back(i);
            }
            for (int i = 0; i < n; i++)
            {
                if (s[i] == c)
                {
                    int ind = upper_bound(g.begin(), g.end(), i) - g.begin();
                    ans = max(ans, g[ind] - i);
                }
            }
            cout << ans << endl;
        }
    }
}
