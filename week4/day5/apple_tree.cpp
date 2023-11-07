#include<bits/stdc++.h>
using namespace std;
#define ll long long
void dfs(int node,vector<int>g[],int par,vector<ll>&leaf)
{
    bool f=false;
    for(auto child:g[node])
    {
        if(child==par) continue;
        f=true;
        dfs(child,g,node,leaf);
        leaf[node]+=leaf[child];
    }
    if(!f) leaf[node]=1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>g[n+1];
        for(int i=1; i<n; i++)
        {
            int p,q;
            cin>>p>>q;
            g[p].push_back(q);
            g[q].push_back(p);
        }
        vector<ll>leaf(n+1,0);
        dfs(1,g,-1,leaf);
        int q;
        cin>>q;
        while(q--)
        {
            ll l,r;
            cin>>l>>r;
            ll ans=leaf[l]*leaf[r];
            cout<<ans<<endl;
        }
    }
}