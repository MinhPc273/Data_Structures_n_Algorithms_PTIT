#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll x[95];

void fibo(){
    x[1]=1;
    x[2]=1;
    for(int i=3;i<93;i++) x[i]=x[i-1]+x[i-2];
}

char Try(ll n,ll k) {
   if(n==1) return '0';
   if(n==2) return '1';
   if(k>x[n-2]) return Try(n-1,k-x[n-2]);
   return Try(n-2,k);
}

void solve() {
    ll n,k;
   cin>>n>>k;
   cout<<Try(n,k)<<endl;
}

int main() {
  fibo();
  int t; cin>>t;
  while(t--) solve();
}
