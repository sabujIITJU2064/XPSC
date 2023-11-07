#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e5+5;
ll n;
ll  a[N];
bool possible(ll mid)
{
    
    for(int i=1;i<n;i++)
    {
        ll dis=a[i]-a[i-1];
        if(dis>mid) return false;
        else if(dis==mid) mid--;
    }
    return true;
}
int main()
{
    ll t;
    cin>>t;
    for(int x=1; x<=t; x++)
    {
    cin>>n;
    ll ans;
    a[0]=0;
    for(int i=1;i<=n;i++) cin>> a[i];
    ll low=1,high=1e9;
    while(low<=high)
    {
        ll mid=low+(high-low)/2;
        if(possible(mid))
        {
            high=mid-1;
            ans=mid;
        }
        else
        {
            low=mid+1;  //Case 1: 5
        }
    }
    cout<<"Case "<<x<<":"<<" "<<ans<<endl;
    }

}