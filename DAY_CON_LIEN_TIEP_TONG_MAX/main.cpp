#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  int sum1=-9999,sum2=-9999;
  for(int i=0;i<n;i++) {
    sum1 = max(a[i],sum1+a[i]);
    sum2 = max(sum1,sum2);
  }
  cout<<sum2<<endl;
}

int main() {
   int t; cin>>t;
   while(t--)  solve();
}
