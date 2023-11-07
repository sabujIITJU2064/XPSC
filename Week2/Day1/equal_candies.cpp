#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,ans=0;
        cin>>a;
        int arr[a];
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];   
        }    
        sort(arr,arr+a);
        int b=arr[0];
        for(int i=0;i<a;i++)
        {
            if(arr[i]!=b)
            {
                ans=ans+(arr[i]-b);
            }
        }
        cout<<ans<<endl;
 
    }
}