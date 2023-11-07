#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int s, k;
    cin >> s >> k;
    int c = 0;
    for (int i = 0; i <= s; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            int z = k - (i + j);
            if (z < 0 || z > s)
            {
                continue;
            }
            c++;
        }
    }
    cout << c << endl;
}