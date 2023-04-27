#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
   ll n,x; cin>>n>>x;
   ll a[n];
   for(ll i=0;i<n;i++) cin>>a[i];
   sort(a,a+n);
   ll cnt=-1;
   for(ll i=0;i<n;i++) {
    if(a[i]<=x) {
        cnt=i+1;
    }
   }
   cout<<cnt<<endl;
}

int main() {
    int t; cin>>t;
    while(t--)
        solve();
}
