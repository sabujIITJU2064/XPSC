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
        set<char>st;
        int ans=1;
        for(int i=0;i<s.size();i++)
        {
            st.insert(s[i]);
            if(st.size()>3)
            {
                ans++;
                st.clear();
                st.insert(s[i]);
            }
        }
        cout<<ans<<endl;
        
    }
}