#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<char>v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] + 32;
            }
        }
        for (int i = 0; i < n-1; i++)
        {
            if(s[i]!=s[i+1])
            {
                v.push_back(s[i]);
            }
        }
        v.push_back(s[n-1]);
        string x;
        for(int i=0;i<v.size();i++)
        {
            x+=v[i];
        }
        if(x.size()==4)
        {
            if(x.find("meow")!=-1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else cout<<"No"<<endl;
        

    }
}