#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n; cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a,a+n);

   for(int i=0;i<n/2;i++){
    cout<<a[n-1-i]<<" "<<a[i]<<" ";
   }
   if(n%2!=0) cout<<a[n/2];
   cout<<endl;
}

int main(){
 int t; cin>>t;
 while(t--) solve();
}
