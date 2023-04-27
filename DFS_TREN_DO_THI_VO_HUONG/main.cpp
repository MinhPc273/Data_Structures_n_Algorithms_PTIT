#include<bits/stdc++.h>
using namespace std;

int n,s,u;
pair<int,int> p[1005];
vector<int> vs(1005,0);
int dem;

void dfs(int u) {
   cout<<u<<" ";
   dem++;
   if(dem==n) return;
   vs[u]=0;
   int m=n+1;
   for(int i=0;i<s;i++) {
    if(p[i].first==u) {
        int tmp=p[i].second;
        if(tmp < m && vs[tmp]) m=tmp;
    }
    if(p[i].second==u) {
        int tmp=p[i].first;
        if(tmp < m && vs[tmp]) m=tmp;
    }
   }
   dfs(m);
}

void solve() {
   dem=0;
   cin>>n>>s>>u;
   for(int i=1;i<=n;i++) vs[i]=1;
   for(int i=0;i<s;i++) {
    int a,b; cin>>a>>b;
    p[i].first=a;
    p[i].second=b;
   }
   dfs(u);
   cout<<endl;
}

int main() {
  int t; cin>>t;
  while(t--) solve();
}
