#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    for(int i=0;i<n;i++)
    {
        int c1=0;
        for(int j=0;j<n;i++)
        {
            if(i%j==0)
            c1++;
        }
        if(c1==2) c++;
        c1=0;
    }
    cout<<c<<endl;

}