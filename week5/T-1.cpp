#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int q;
    int y=1;
    while (cin >> n >> q)
    {
        if(n==0 && q==0) break;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
            sort(arr,arr+n);
            cout<<"CASE# "<<y<<": "<<endl;
        for (int i = 1; i <= q; i++)
        {
            int x;
            cin >> x;
            int low = 0, high = n - 1;
            bool f = false;
            int indx;
            while (low <= high)
            {
                int mid = (low + high) / 2;
                if (x == arr[mid])
                {
                    f = true;
                    indx = mid;
                    break;
                }
                else if (x < arr[mid])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            if(f)cout<<x<<" found at "<<indx+1<<endl;
            else cout<<x<<" not found"<<endl;
            y++;
        }
    }
}