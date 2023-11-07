#include<bits/stdc++.h>
using namespace std;
int main()
{
      string s;
      cin>>s;
      set<char>st;
      for(int i=0;i<s.size();i++)
      {
        st.insert(s[i]);
      }
      vector<char>v;
      for(auto u:st)
      {
        v.push_back(u);
      }
      sort(v.begin(),v.end());     
      string x="abcdefghijklmnopqrstuvwxyz";
      bool f=false;
      for(int i=0;i<x.size();i++)
      {
        if(x[i]!=v[i])
        {
            cout<<x[i];
            f=true;
            break;
        }
      }
      if(f==false ) cout<<"None";
}