#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int z=y/x;
        if(y%x==0)
        {
            cout<<"1"<<" "<<z<<endl;
        }
        else
        {
            cout<<"0"<<" "<<"0"<<endl;
        }
    }

    
}
