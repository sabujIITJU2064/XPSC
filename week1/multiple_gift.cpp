#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b;
    cin >> a >> b;
    int c = 1;
    while (a * 2 <= b)
    {
        c++;
        a = a * 2;
    }
    cout << c;
}