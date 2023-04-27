#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n,m; cin>>n>>m;
  map<int,int> ma;
  for(int i=0;i<n+m;i++){
    int x; cin>>x;
    ma[x]++;
  }
  //for(int i=0;i<m;i++)
  for(auto i:ma){
    cout<<i.first<<" ";
  }
  cout<<endl;
  for(auto i:ma){
    if(i.second==2) cout<<i.first<<" ";
  }
  cout<<endl;
}

int main(){
  int t; cin>>t;
  while(t--) solve();
}
