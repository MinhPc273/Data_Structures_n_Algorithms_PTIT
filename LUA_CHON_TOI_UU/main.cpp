#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
  if(a.second != b.second ) return a.second < b.second;
  else return a.first < b.first;
}

void solve() {
   int n; cin>>n;
   pair<int,int> p[n];
   for(int i=0;i<n;i++) {
      int x,y; cin>>x>>y;
      p[i].first=x;
      p[i].second=y;
   }
   sort(p,p+n,cmp);
   int endd=p[0].second,cnt=1;
   for(int i=0;i<n-1;i++) {
       if(p[i+1].first >= endd){
            cnt++;
        endd=p[i+1].second;
       }
   }
   cout<<cnt<<endl;
}

int main() {
  int t; cin>>t;
  while(t--) solve();
}
