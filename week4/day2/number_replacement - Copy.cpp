#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        string s;
        cin >> s;
        bool f= false;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j] && s[i] != s[j])
                {
                    f=true;
                }
            }
        }
        if (f == false)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}