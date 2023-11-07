#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        map<string,ll>total;
        map<char,ll>first;
        map<char,ll>second;
        vector<string>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            total[v[i]]++;
            first[v[i][0]]++;
            second[v[i][1]]++;
        }
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=first[v[i][0]]-total[v[i]];
            first[v[i][0]]--;
            ans+=second[v[i][1]]-total[v[i]];
            second[v[i][1]]--;
            total[v[i]]--;
        }
        cout<<ans<<endl;
    }
        
}