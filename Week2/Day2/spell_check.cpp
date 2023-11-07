#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, count = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string a;
        cin >> a;
        sort(a.begin(), a.end());
        string b = "Timur";
        sort(b.begin(), b.end());
        if (a == b)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
