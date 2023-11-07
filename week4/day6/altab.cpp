#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tc;
    cin >> tc;
    map<string,int>mp;
    string ans;
    vector<string>vs;
    while (tc--)
    {
        string p;
        cin>>p;
        vs.push_back(p);
    }
    for(int i=vs.size()-1; i>=0; i--)
    {
        mp[vs[i]]++;
        if(mp[vs[i]]==1)
        {
        string x;
        x+=vs[i][vs[i].size()-2];
        x+=vs[i][vs[i].size()-1];
        ans+=x;
        }
    }
    cout<<ans<<endl;
}