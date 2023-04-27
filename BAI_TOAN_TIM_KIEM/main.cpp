#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n,s,k; cin>>n>>s>>k;
  int a[n+1];
  for(int i=0;i<n;i++) cin>>a[i];
  int b[n+1];
  b[s+1]=0;
  int check=1;
  for(int i=s;i>=0;i--) {
     b[i]=b[i+1]+a[i];
     if(b[i]>k) {
        check=0;
        cout<<i+1<<endl;
        break;
     }
  }
  if(check) cout<<-1<<endl;
}

int main() {
   int t; cin>>t;
   while(t--)
      solve();
}
