#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int query;
    cin>>query;
    while(query--)
    {
        int u,v; cin>>u>>v;
        int sum;
        for(int i=u;i<=v;i++ )
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
        sum=0;
    }
}
