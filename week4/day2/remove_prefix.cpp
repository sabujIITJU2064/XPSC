#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        set<int> s;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i =n-1; i >=0; i--)
        {
            s.insert(a[i]);
            c++;
            if (c > s.size())
                break;
        }
        cout << n - s.size() << endl;
    }
}