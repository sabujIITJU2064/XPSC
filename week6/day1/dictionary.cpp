#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<string>v;
    for(char i='a';i<='z';i++)
        {
            for(char j='a';j<='z';j++)
            {
                if(i==j) continue;
                else 
                {
                    string x;
                    x+=i;
                    x+=j;
                    v.push_back(x);
                }
            }
        }
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==s)
            cout<<i+1<<endl;
        }

    }


}