#include<bits/stdc++.h>
using namespace std;

#define p pair<int,int>
#define pa pair<p,int>

int x,y;
int a[1005][1005];

int BFS(){
    queue<pa> q;
    q.push({{1,1},a[1][1]});
    int dem=0;
    while(!q.empty()) {
        dem++;
        int k=q.front().second;
        int n=q.front().first.first;
        int m=q.front().first.second;
        if(n==x && m==y) return dem;
        if(n+k<=x) q.push({{n+k,m},a[n+k][m]});
        if(m+k<=y) q.push({{n,m+k},a[n][m+k]});
        q.pop();
    }
    return -1;
}

void solve() {
   cin>>x>>y;
   for(int i=1;i<=x;i++){
    for(int j=1;j<=y;j++) cin>>a[i][j];
   }
   cout<<BFS();
}

int main() {
  int t; cin>>t;
  while(t--) solve();
}
