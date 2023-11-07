#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll n,k,m,x=0;cin>>n>>k;
   while(n>0){
    n/=k;
    x++;
   }
   cout<<x<<endl;
}