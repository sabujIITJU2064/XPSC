#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        pair<int, int> p[n];
        long long  ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                ans += i;
                p[i].first = n - i - 1;
                p[i].second = i;
            }
            else
            {
                ans += n - i - 1;
                p[i].first= i;
                p[i].second = n - i - 1;
            }
        }
        sort(p,p+n);
        for (int i=n-1; i>=0; i--)
        {
            ans -= p[i].second;
            ans += max(p[i].first, p[i].second);
            cout << ans << " ";
        }
        cout<<endl;
    }
}