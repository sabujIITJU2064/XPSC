#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string a,b;
        cin>>a>>b;
        if(a==b) cout<<"="<<endl;
        else if(a.back()==b.back())
        {
            if(a.back()=='S')
            {
                if(a.size()<b.size()) cout<<">"<<endl;
                else cout<<"<"<<endl;
            }
            else
            {
                if(a.size()<b.size()) cout<<"<"<<endl;
                else cout<<">"<<endl;
            }
        }
        else if(a.back()=='S') cout<<"<"<<endl;
        else if(b.back()=='S') cout<<">"<<endl;
        else if(a.back()=='L') cout<<">"<<endl;
        else if(b.back()=='L') cout<<"<"<<endl;

    }
}