#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9+7;

ll power(ll a,ll n) {
    if(n==0) return 1;
    ll tmp=power(a,n/2);
    if(n%2==0) return tmp*tmp % MOD;
    else return a*(tmp*tmp % MOD) % MOD;
}

void solve() {
   string s; cin>>s;
   ll a=stoll(s);
   reverse(s.begin(),s.end());
   ll n=stoll(s);
   cout<<power(a,n)<<endl;;
}

int main() {
   int t; cin>>t;
   while(t--) solve();
}
