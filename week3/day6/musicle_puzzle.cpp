#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<pair<char,char>>st;
        for(int i=0;i<n-1;i++)
        {
           char x=s[i];
           char y=s[i+1];
           st.insert({x,y});
        }
        cout<<st.size()<<endl;
    }
}