#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
  if(a.second != b.second) return a.second>b.second;
  return a.first<b.first;
}

void solve(){
   int n; cin>>n;
   pair<int,int> p[n];
   map<int,int> m;
   for(int i=0;i<n;i++){
     int x; cin>>x;
     p[i].first=x;
     m[x]++;
   }
   for(int i=0;i<n;i++){
    int x=p[i].first;
    p[i].second=m[x];
   }
   sort(p,p+n,cmp);
   for(int i=0;i<n;i++) cout<<p[i].first<<" ";
   cout<<endl;
}

int main(){
  int t;
  cin>>t;
  while(t--) solve();
}
