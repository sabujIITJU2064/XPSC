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
        vector<int> v;

        for (int i = 9; i >= 1; i--)
        {
            if (n >= i)
            {
                v.push_back(i);
                n = n - i;
            }
        }
        sort(v.begin(),v.end());
        for(auto u:v)
        {
            cout<<u;
        }
        cout << endl;
    }
}
