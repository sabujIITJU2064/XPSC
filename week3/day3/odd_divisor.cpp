#include <iostream>
 
using namespace std;
 
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
       long long int n;
       cin>>n;
       while(n%2==0)
       {
          n=n/2;
       }
       if(n==1) cout<<"No"<<endl;
       else cout<<"Yes"<<endl;
    }
    return 0;
}