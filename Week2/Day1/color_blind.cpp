#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int c=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==b[i] || (a[i]=='G' && b[i]=='B')||(a[i]=='B'&& b[i]=='G'))
            {
                c++;
            }
        }
        if(c==n)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
 
    }
}