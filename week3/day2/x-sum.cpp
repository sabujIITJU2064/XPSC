#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0;j<m; j++)
            {
                cin>>arr[i][j];
            }
        }
        long long  ans=LONG_LONG_MIN;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                long long  p=arr[i][j];
                int k=1;
                while(i+k <n && j+k<m)
                {
                    p+=arr[i+k][j+k];
                    k++;
                }
                k=1;
                while(i-k>=0 && j-k>=0)
                {
                    p+=arr[i-k][j-k];
                    k++;
                }
                k=1;
                while(i-k >=0 && j+k<m) 
                {
                    p+=arr[i-k][j+k];
                    k++;
                }
                k=1;
                while(i+k<n && j-k>=0)
                {
                    p+=arr[i+k][j-k];
                    k++;
                }
                ans=max(ans,p);
            }
        }
        cout<<ans<<endl;
    }
}