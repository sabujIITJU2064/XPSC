#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<ll>even;
    vector<ll>odd;
    for(ll i=0;i<n;i++)
    {
       if(v[i]%2==0)
       {
          even.push_back(v[i]);
       }
       else
       {
          odd.push_back(v[i]);
       }
    }
    ll even_sum=0;
    for(ll i=0;i<even.size();i++)
    {
        even_sum+=even[i];
    }
    sort(odd.begin(),odd.end(),greater<ll>());
    ll odd_sum=0;
    if(odd.size()%2==0)
    {
        for(ll i=0;i<odd.size();i++)
        {
            odd_sum+=odd[i];
        }
    }
    else
    {
        for(ll i=0;i<odd.size()-1;i++)
        {
            odd_sum+=odd[i];
        }
    }
    cout<<odd_sum+even_sum<<endl;
}