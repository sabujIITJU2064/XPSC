#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s.size()==1) cout<<0<<0<<0<<s;
    else if(s.size()==2) cout<<0<<0<<s;
    else if(s.size()==3) cout<<0<<s;
    else if(s.size()==4) cout<<s;
    else
    {
        for(int i=0;i<=3;i++)
        {
            cout<<s[i];
        }
    }
    
}