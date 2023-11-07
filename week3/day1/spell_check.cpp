#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc, count = 1;
    cin >> tc;
    while (tc--)
    {
        int c;
        string a;
        cin >> c >> a;
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