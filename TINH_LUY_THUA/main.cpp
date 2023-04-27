#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9+7;

ll power(ll a,ll b) {
    if(b==0) return 1;
    ll tmp=power(a,b/2);
    if(b%2) return a*(tmp*tmp%MOD)%MOD;
    return tmp*tmp%MOD;
}

void solve() {
  ll a,b;
  while(1){
    cin>>a>>b;
    if(a==0 && b==0) break;
    cout<<power(a,b)<<endl;
  }
}


int main() {
  solve();
}
