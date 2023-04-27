#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
   int n; cin>>n;
   set<int> s;
   for(int i=0;i<n;i++){
    int x; cin>>x;
    s.insert(x);
   }
   int x=*s.begin(),y=*s.rbegin();
   cout<<y-(x+s.size())+1<<endl;
}

int main(){
    int t; cin>>t;
    while(t--) solve();
}
