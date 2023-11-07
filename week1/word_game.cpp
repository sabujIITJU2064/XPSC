#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[4]={0};
    while(t--)
    {
        map<string,int>mp;
        int n;
        cin>>n;
        string s[5][n];
        for(int i=1;i<=3;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>s[i][j];
            }
        }
        for(int i=1;i<=3;i++)
        {
            for(int j=1;j<=n;j++)
            {
                mp[s[i][j]]++;
            }
        }
        for(int i=1;i<=3;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if( mp[s[i][j]]==1)
                {
                    a[i]+=3;
                }
                if( mp[s[i][j]]==2)
                {
                   a[i]+=1;
                }
                if( mp[s[i][j]]==3)
                {
                    a[i]+=0;
                }
            }
        }
        cout<<a[1]<<" "<<a[2]<<" "<<a[3];
        cout<<endl;
        a[1]=0;
        a[2]=0;
        a[3]=0;
        
    }
}