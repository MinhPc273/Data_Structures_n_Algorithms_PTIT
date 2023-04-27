#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b ){
    if(a.second != b.second) return a.second<b.second;
    else return;
}

void solve(){
   int n,m; cin>>n>>m;
   pair<int,int> p[n];
   for(int i=0;i<n;i++) cin>>p[i].first;
   for(int i=0;i<n;i++){
    p[i].second= abs(p[i].first - m);
   }
  // sort(p,p+n);
   stable_sort(p,p+n,cmp);
   for(int i=0;i<n;i++) cout<<p[i].first<<" ";
   cout<<endl;
}

int main(){
   int t; cin>>t;
   while(t--) solve();
}
