#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin>>n;
  int a[n],b[n];
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n-1;i++) cin>>b[i];
  int cnt=n;
  for(int i=0;i<n-1;i++) {
    if(a[i]!=b[i]) {
        cnt=i+1;
        break;
    }
  }
  cout<<cnt<<endl;
}

int main() {
  int t; cin>>t;
  while(t--) solve();
}
