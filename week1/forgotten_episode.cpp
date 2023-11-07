#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll ans=(n*(n-1))/2+n;
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    ll sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum=sum+a[i];
    }
    cout<<ans-sum;
}