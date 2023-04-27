#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    map<int,int> m;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        m[x]++;
    }
    if(m[k]==0) cout<<-1<<endl;
    else cout<<m[k]<<endl;
}

int main(){
    int t; cin>>t;
    while(t--) solve();
}
