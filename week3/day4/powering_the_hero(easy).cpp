#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        priority_queue<int> p;
        int arr[n];
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                p.push(arr[i]);
            }
            else if (arr[i] == 0)
            {
                if (!p.empty())
                {
                    ans += p.top();
                    p.pop();
                }
                else
                {
                    continue;
                }
            }
        }
        cout << ans << endl;
    }
}