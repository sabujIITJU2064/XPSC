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

        int a, b, c;
        if (n % 3 == 0)
        {
            a = n / 3;
            b = n / 3 + 1;
            c = n / 3 - 1;
        }
        else if (n % 3 == 1)
        {
            a = n / 3;
            b = n / 3 + 2;
            c = n / 3 - 1;
        }
        else if (n % 3 == 2)
        {
            a = n / 3 + 1;
            b = n / 3 + 2;
            c = n / 3 - 1;
        }

        cout << a << ' ' << b << ' ' << c << endl;
    }
}