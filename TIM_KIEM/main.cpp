#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n,k; cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a,a+n);
   int b=binary_search(a,a+n,k);
   if(b==0) b--;
   cout<<b<<endl;
}

int main(){
  int t; cin>>t;
  while(t--) solve();
}
