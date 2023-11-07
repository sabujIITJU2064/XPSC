#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
	int a[3];
	int cnt=0;
	for(int i=0;i<3;i++)
	{
	    cin>>a[i];
	    if(a[i]==1) cnt++;
	}
	if(cnt==3) cout<<"Not now"<<endl;
	else if(cnt==2) cout<<"Not now"<<endl;
	else cout<<"Water filling time"<<endl;
    }
}
