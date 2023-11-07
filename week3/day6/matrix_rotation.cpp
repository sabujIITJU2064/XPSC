#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a,b;
        cin>>a>>b;
        int c,d;
        cin>>c>>d;
        if(((a<b && c<d)&&(a<c && b<d)) || ((c<a && d<b)&&(c<d && a<b)) || ((d<c && b<a)&&(d<b && c<a)) ||((b<d && a<c)&&(b<a && d<c)))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}