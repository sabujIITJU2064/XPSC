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
        vector<int> v1, v2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                v1.push_back(a[i]);
            else
                v2.push_back(a[i]);
        }
        if (v1.size() == 0 || v2.size() == 0)
            cout << "YES" << endl;
        else
        {
            sort(a, a + n);
            int x = a[0];
            if (x % 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
