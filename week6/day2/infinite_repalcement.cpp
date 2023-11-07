#include<bits/stdc++.h>
using namespace std;
#define sabuj() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    sabuj();
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        sort(b.begin(),b.end());
        if(b[0]=='a')
        {
            if(b.size()==1) cout<<"1"<<endl;
            else cout<<"-1"<<endl;

        }
        else
        {
            cout <<(long long)pow(2,a.size()) << endl;
        }
    }
}