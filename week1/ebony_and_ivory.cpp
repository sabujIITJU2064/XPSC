#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int n = max(a, b);
    for (int i = 0; i <= 10000; i++)
    {
        for (int j = 0; j <= 10000; j++)
        {
            if ((i * a) + (j * b) == c)
            {
                cout << "Yes\n";
                return 0;
            }
        }
    }
    cout << "No\n";
}