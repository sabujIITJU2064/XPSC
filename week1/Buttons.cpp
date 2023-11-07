#include <bits/stdc++.h>

using namespace std;

int main()
{
   int a,b;
   cin>>a>>b;
   int c=max(a+a-1,b+b-1);
   int d=max(c,a+b);
   cout<<d;
}