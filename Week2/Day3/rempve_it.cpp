#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
    }
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=k)
        {
            v.push_back(a[i]);
        }
 
    }
    for(auto u:v)
    {
        cout<<u<<" ";
    }

    
}
