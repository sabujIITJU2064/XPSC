#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=a/c;
    int y=b/c;
    if(c>=a&&c<=b)cout<<c<<endl;
    else if(a%c==0)cout<<a<<endl;
    else if(x==y)cout<<-1<<endl;
    else cout<<y*c<<endl;
}