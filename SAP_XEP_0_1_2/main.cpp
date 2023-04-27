#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    multiset<int> s;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        s.insert(x);
    }
    for(auto i:s) cout<<i<<" ";
    cout<<endl;
}

int main(){
   int t; cin>>t;
   while(t--) solve();
}
