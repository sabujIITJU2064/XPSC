#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        ll sz=s.size();
        ll a=stoi(s);
        ll b=pow(10,sz-1);
        ll ans=a-b;
        cout<<ans<<endl;
    }
}