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
        cin >> n;
        if (n == 3)
            cout << "-1" << endl;
        else if (n % 2 == 0)
        {
            for (int i = n; i >= 1; i--)
                cout << i << " ";
            cout << endl;
        }
        else
        {
            for (int i = n; i >= (n / 2) + 2; i--)
                cout << i << " ";
            for (int i = 1; i <= (n / 2) + 1; i++)
                cout << i << " ";
            cout << endl;
        }
    }
}
