#include<bits/stdc++.h>
using namespace std;

int n,a[15][15];
bool check=true;

void back_track(int x,int y,string res){
   if(x==n-1 && y==n-1){
    cout<<res<<" ";
    check=false;
   }
   if(a[x+1][y]==1) back_track(x+1,y,res+"D");
   if(a[x][y+1]==1) back_track(x,y+1,res+"R");
}

void solve(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin>>a[i][j];
    }
    if(a[0][0]==0 || a[n-1][n-1]==0){
        cout<<-1;
        return;
    }
    back_track(0,0,"");
    if(check) cout<<-1;
}


int main(){
  int t; cin>>t;
  while(t--){
    check=true;
    solve();
    cout<<endl;
  }
}
