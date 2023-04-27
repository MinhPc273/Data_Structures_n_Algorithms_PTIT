#include<bits/stdc++.h>
using namespace std;

void solve() {
   int n,k; cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a,a+n);
   int s1=0,s2=0;
   k=min(k,n-k);
   for(int i=0;i<n;i++){
    if(i<k) s1+=a[i];
    else s2+=a[i];
   }
   cout<<s2-s1<<endl;
}

int main() {
    int t; cin>>t;
    while(t--) solve();
}
