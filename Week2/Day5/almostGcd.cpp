#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &it : a) cin>>it;
    int mx=INT_MIN;
    int ans;
    for(int i=2; i<=1000; i++)
    {
        int cnt=0;
        for(int j=0; j<n; j++)
        {
            if(a[j]%i==0)
            {
                cnt++;
            }
        }
        if(cnt>mx)
        {
            mx=cnt;
            ans=i;
        }
    }
    cout<<ans<<endl;
}