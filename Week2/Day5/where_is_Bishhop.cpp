#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char s[10][10];
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                cin >> s[i][j];
            }
        }
        for (int i = 2; i <= 8; i++)
        {
            for (int j = 2; j <= 8; j++)
            {
                if (s[i][j] == '#' && s[i - 1][j - 1] == '#' && s[i + 1][j - 1] == '#' && s[i - 1][j + 1] == '#' && s[i + 1][j + 1] == '#')
                {
                    cout << i << " " << j << endl;
                    break;
                }
            }
        }
    }
}