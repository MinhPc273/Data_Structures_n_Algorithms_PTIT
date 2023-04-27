#include<bits/stdc++.h>
using namespace std;

void run(int x,int m,int y[],int &res) {
      if(x==1) res+=(upper_bound(y,y+m,0)-y);
      if(x==2) res+=(upper_bound(y,y+m,1)-y);
      if(x==3) res+=(upper_bound(y,y+m,2)-y);
      if(x==4) res+=(upper_bound(y,y+m,1)-y);
      if(x>=4){
        int u=upper_bound(y,y+m,x)-y;
        cout<<"u= "<<u<<endl;
        res+=(m-u);
      }
}

void solve() {
   int n,m; cin>>n>>m;
   int x[n],y[m];
   for(int i=0;i<n;i++) cin>>x[i];
   for(int i=0;i<m;i++) cin>>y[i];
   int res=0;
   sort(y,y+m);
   for(int i=0;i<n;i++){
       run(x[i],m,y,res);
   }
   cout<<res<<endl;
}

int main(){
   solve();
}
