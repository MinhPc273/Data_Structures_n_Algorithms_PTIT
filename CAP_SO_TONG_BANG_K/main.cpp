#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n,k; cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a,a+n);
   int dem=0;
   for(int i=0;i<n;i++){
    int x=lower_bound(a+i+1,a+n,k-a[i])-a;
    int y=upper_bound(a+i+1,a+n,k-a[i])-a;
    dem+=(y-x);
   }
   cout<<dem<<endl;
}

int main(){
    int t; cin>>t;
    while(t--) solve();
}
