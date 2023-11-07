#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],b[n+1],c[n+1];
    b[0]=0,c[0]=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        b[i+1]=a[i]+b[i];
    }
    sort(a,a+n);
    for(ll i=0;i<n;i++)
    {
        c[i+1]=a[i]+c[i];
    }
    // for(ll i=0;i<=n;i++)
    // {
    //     cout<<b[i]<<" ";      
    // }                        print kore check kore dekhlam
    // cout<<endl;
    // for(ll i=0;i<=n;i++)
    // {
    //     cout<<c[i]<<" ";
    // }
    ll m;
    cin>>m;
    while(m--)
    {
        ll t,l,r;
        cin>>t>>l>>r;
        if(t==1) cout<<b[r]-b[l-1]<<endl;
        else cout<<c[r]-c[l-1]<<endl;
    }

    
}