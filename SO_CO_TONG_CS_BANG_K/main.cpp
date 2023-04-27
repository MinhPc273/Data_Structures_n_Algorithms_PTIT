#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD=1e9+7;

ll c[1005][1005];

void to_hop() {
  for(int i=0;i<=1000;i++) {
    for(int j=0;j<=i;j++) {
        if(j==0 || i==j) c[i][j]=1;
        else c[i][j]=c[i-1][j-1]+c[i-1][j];
        c[i][j]=c[i][j] % MOD;
    }
  }
}

void solve() {
    int n,k; cin>>k>>n;
    ll s=0;
    k-=n/9;
    for(int i=k-1;i>=1;i--) {
        s+=c[n][i];
        s = s % MOD;
    }
    cout<<s<<endl;
}

int main() {
    to_hop();
   int t; cin>>t;
   while(t--) solve();
}
