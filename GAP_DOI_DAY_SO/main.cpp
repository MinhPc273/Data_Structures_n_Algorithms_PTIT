#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll m;

ll mu(ll n) {
   while(n--) m*=2;
   return m;
}

void solve() {
    m=1;
   ll n,k; cin>>n>>k;
   ll len=mu(n-1);
   while(1){
     if(k==len){
        cout<<n<<endl;
        break;
     }
     else if(k>len) k=2*len-k;
     else if(k<len) {
        len/=2;
        n--;
     }
   }
}

int main() {
   int t; cin>>t;
   while(t--) solve();
}
