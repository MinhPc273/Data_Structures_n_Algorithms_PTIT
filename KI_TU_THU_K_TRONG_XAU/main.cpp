#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll power(ll n) {
    int m=1;
    while(n--) m*=2;
    return m;
}

char fid(ll n,ll len,ll k) {
   if(k==len) return (char)(n+64);
   if(k>len) k=2*len-k;
   return fid(n-1,len/2,k);
}

void solve() {
   ll n,k; cin>>n>>k;
   ll len=power(n-1);
   cout<<fid(n,len,k)<<endl;
}

int main(){
    //cout<<power(3);
    //cout<<(char)65;
   int t; cin>>t;
   while(t--) solve();
}
