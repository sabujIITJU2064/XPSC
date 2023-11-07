#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll sum = 0;
        ll cnt = 0;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum+=abs(a[i]);
            if(a[i]!=0)
            {
                v.push_back(a[i]);
            }

        }
        v.push_back(1000);
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]<0 && v[i+1]>0)
            cnt++;
        }
        cout<<sum<<" "<<cnt<<endl;
    }
}