#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[105][105];

void back_track(int x,int y,int &dem){
    if(x==n-1 && y==m-1){
        dem++;
    }
    else{
      for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
                //chu y den bien
            if(i!=j && x+i<=n && y+j<=m) back_track(x+i,y+j,dem);
        }
      }
    }
}

void solve(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin>>a[i][j];
    }
    int dem=0;
    back_track(0,0,dem);
    cout<<dem<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}
