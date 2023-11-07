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
       cin>>n;
       ll sum=0;
       ll x=n;
       while(x!=0)
       {
           sum+=x/2;
           x=x/2;
       }
       ll ans=sum+n;
       cout<<ans<<endl;

    }
}