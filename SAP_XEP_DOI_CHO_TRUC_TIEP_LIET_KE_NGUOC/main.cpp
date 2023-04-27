#include<bits/stdc++.h>
using namespace std;


void solve(){
   int n; cin>>n;
   int k=0,index=1;
   int a[n];
   vector<int> v[n];
   for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]>a[j]) swap(a[i],a[j]);
    }
    for(int j=0;j<n;j++) v[i].push_back(a[j]);
    index++;
   }
   for(int i=n-2;i>=0;i--){
    cout<<"Buoc "<<i+1<<": ";
    for(auto j:v[i]) cout<<j<<" ";
    cout<<endl;
   }
}

int main(){
   int t; cin>>t;
   while(t--) solve();
}
