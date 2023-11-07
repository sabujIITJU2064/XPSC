#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans=0;
    for (int j = 6; j <= n; j++)
    {
        int cnt = 0;
        int tmp= j;
        for (int i = 2; i * i <= tmp; i++)
        {
            if (tmp% i == 0)
            {
                cnt++;
                while(tmp%i==0)
                {
                    tmp=tmp/i;
                }
            }
        }
        if(tmp!=1) cnt++;
        if(cnt==2) ans++;
    }
    cout<<ans<<endl;
}