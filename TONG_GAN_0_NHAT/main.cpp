#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  int MIN=INT_MAX;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(abs(MIN)>abs(a[i]+a[j])) MIN=a[i]+a[j];
    }
  }
  cout<<MIN<<endl;
}

int main(){
    int t; cin>>t;
    while(t--) solve();
}
