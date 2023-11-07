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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll l=0;
        ll r=n-1;
        ll sum=0;
        while(l<=r)
        {
            sum+=a[r]-a[l];
            l++;
            r--;
        }
        cout<<sum<<endl;
    }
}