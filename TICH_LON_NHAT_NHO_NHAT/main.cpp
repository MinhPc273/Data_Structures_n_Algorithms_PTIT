#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
   return a>b;
}

void solve(){
    int n,m; cin>>n>>m;
    long long a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a,a+n,cmp);
    sort(b,b+m);
    cout<<a[0]*b[0]<<endl;
}

int main(){
   int t; cin>>t;
   while(t--) solve();
}
