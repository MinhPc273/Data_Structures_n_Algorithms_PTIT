#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n; cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   cout<<"[";
   for(int i=0;i<n-1;i++)cout<<a[i]<<" ";
   cout<<a[n-1]<<"]\n";
   while(n!=1){
        cout<<"[";
   int x;
     for(int i=0;i<n-1;i++){
         x=a[i]+a[i+1];
         cout<<x;
         if(i!=n-2) cout<<" ";
         a[i]=x;
     }
     cout<<"]"<<endl;
     n--;
   }
}

int main(){
  int t; cin>>t;
  while(t--){
    solve();
  }
}
