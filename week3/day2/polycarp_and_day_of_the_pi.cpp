#include <iostream>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string a;
        cin >> a;
        int count=0;
        string b = "314159265358979323846264338327";
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == b[i])
                count++;
            else
                break;
        }
        cout << count << endl;
    }
    return 0;
}