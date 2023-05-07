#include<bits/stdc++.h>
using namespace std;

int a[1005][1005],v,e[1005],u,d[1005],vs[1005]={0};

void init() {
  for(int i=0;i<=v;i++){
    for(int j=0;j<=v;j++) a[i][j]=9999;
  }
}

void DIJKSTRA(int u){
     for(int i=1;i<=v;i++) {
        d[i]=a[u][i];
        e[i]=u;
     }
     d[u]=0; e[u]=0; vs[u]=1;
     while(1){
        u=0;
        int Min=9999;
        for(int i=1;i<=v;i++) {
            if(vs[i]==0 && d[i]<Min){
                u=i;
                Min=d[i];
            }
        }
        if(u==0) break;
        vs[u]=1;
        for(int i=1;i<=v;i++){
            if(d[u]+a[u][i]<d[i]) {
                d[i]=d[u]+a[u][i];
                e[i]=u;
            }
        }
     }
     for(int i=1;i<=v;i++) {
        cout<<d[i]<<" ";
     }
}

int main() {
    int n;
     cin>>v>>n>>u;
    init();
    for(int i=0;i<n;i++) {
        int x,y,z; cin>>x>>y>>z;
        a[x][y]=z;
    }
    for(int i=1;i<=v;i++){
        a[i][i]=0;
    }
  for(int i=1;i<=v;i++){
    for(int j=1;j<=v;j++) cout<<a[i][j]<<" ";
    cout<<endl;
  }
  DIJKSTRA(u);
}
