#include<bits/stdc++.h>
using namespace std;

const unsigned int M = 1000000007;

void solve(){
   int n; cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a,a+n);
   long long s=0;
   for(int i=0;i<n;i++){
     s+=(i*a[i]);
     s=s%M;
   }
   cout<<s<<endl;
}

int main(){
  int t; cin>>t;
  while(t--) solve();
}
