#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n;
      cin>>n;
      string s;
      cin>>s;
      int c=0;
      for(int i=0;i<s.size();i++)
      {
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C')
        {
            c++;
        }
      }
      cout<<c;
}