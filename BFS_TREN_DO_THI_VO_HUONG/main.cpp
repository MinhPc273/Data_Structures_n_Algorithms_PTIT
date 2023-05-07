#include<bits/stdc++.h>
using namespace std;

   int n,m,u;
   vector<int> vs(1005,0);
   vector<vector<int>> a(1005);

void dfs(int u) {
   cout<<u<<" ";
   vs[u]=1;
   for(int i=0;i<a[u].size();i++) {
     int tmp=a[u][i];
     if(!vs[tmp]) {
        dfs(tmp);
     }
   }
   return;
}

void bfs() {
  queue<int> b;
  b.push(u);
  vs[u]=1;
  while(!b.empty()) {
    int u=b.front();
    cout<<u<<" ";
    b.pop();
    for(int i=0;i<a[u].size();i++) {
        int tmp=a[u][i];
        if(!vs[tmp]) {
            b.push(tmp);
            vs[tmp]=1;
        }
    }
  }
  return;
}

void solve() {
   cin>>n>>m>>u;
   for(int i=1;i<=n;i++){
    vs[i]=0;
    a[i].clear();
   }
   for(int i=0;i<m;i++) {
    int x,y; cin>>x>>y;
    a[x].push_back(y);
    a[y].push_back(x);
   }
   for(int i=1;i<=n;i++) sort(a[i].begin(),a[i].end());
   bfs();
   cout<<endl;
}

int main() {
  int t; cin>>t;
  while(t--) solve();
}
