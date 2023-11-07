#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,ll>mp;
        for(ll i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        ll ans=0;
        for(char i='a';i<='z';i++)
        {
            ll a=mp[i];
            ll b=mp[i-32];
            ll x=min(a,b);
            ans+=x;
            ll y=abs(a-b);
            ll z=y/2;
            ans+=min(k,z);
            k=k-min(k,z);
        }
        cout<<ans<<endl;
    }
}