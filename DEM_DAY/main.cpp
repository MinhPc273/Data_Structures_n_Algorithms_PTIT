#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD=123456789;

ll power(ll n) {
   if(n==0) return 1;
   ll tmp=power(n/2);
   if(n%2==0) return tmp*tmp % MOD;
   else return 2*(tmp*tmp % MOD) % MOD;
}

void solve() {
   ll n; cin>>n;
   cout<<power(n-1)<<endl;
}

int main() {
  int t; cin>>t;
  while(t--)
    solve();
}
