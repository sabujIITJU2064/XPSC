#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long  a, b;
        cin >> a >> b;
        int ans = a ^ b;
        cout << ans << endl;
    }
}