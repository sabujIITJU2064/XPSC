#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int a[n];
    int i,j;                     //greedy method e kora eta .ekhane time limit khabo
    for(i=0;i<n;i++) 
    cin >> a[i];
    long mx = INT_MIN;
    for(i=0;i<n-k+1;i++)
    {
        long s=0;
        for(j=i;j< i + k;j++)
        {
            s += a[j];
        }
        mx = max(mx, s);
    }
    cout << mx << endl;
}