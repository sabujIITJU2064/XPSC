#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=0;
    while(s.size()!=1)
    {
        int ans=0;
        for(auto u:s) ans+=u-'0';
        s=to_string(ans);
        cnt++;
    }
    cout<<cnt<<endl;
}