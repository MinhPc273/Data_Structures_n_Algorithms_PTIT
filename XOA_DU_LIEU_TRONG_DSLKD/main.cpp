#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n; cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   int k; cin>>k;
   for(int i=0;i<n;i++) {
    if(a[i]!=k) cout<<a[i]<<" ";
   }
}

int main(){
   solve();
}
