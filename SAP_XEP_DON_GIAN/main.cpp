#include<bits/stdc++.h>
using namespace std;

void solve() {
   int n; cin>>n;
   vector<int> a(n+1,0), b(n+1,0);
   int s=0;
   for(int i=1;i<=n;i++) cin>>a[i];
   for(int i=1;i<=n;i++) {
      b[a[i]] = b[a[i]-1] + 1;
      s=max(s,b[a[i]]);
   }
   cout<<n-s<<endl;
}

int main() {
   solve();
}
