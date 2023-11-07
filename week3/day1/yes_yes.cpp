#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int tc;
    cin>>tc;
    while(tc--)
    {
        string a="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        string ab;
        cin>>ab;
        if(a.find(ab)!=-1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}