#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin>>y;
    while(y>0)
    {
        y++;
        int a=(y/1000);
        int b=(y%1000)/100;
        int c=(y%100)/10;
        int d=(y%10);
        if(a!=b&& a!=c&& a!=d && b!=c&& b!=d&& c!=d)
        {
            break;
        }
 
    }
    cout<<y<<endl;
}