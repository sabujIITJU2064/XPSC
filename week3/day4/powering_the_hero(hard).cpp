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
        priority_queue<int> pq;
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
                pq.push(arr[i]);
            }
            else if (arr[i] == 0)
            {
                if (!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
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