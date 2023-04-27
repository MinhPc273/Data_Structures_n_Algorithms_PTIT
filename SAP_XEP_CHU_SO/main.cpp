#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n; cin>>n;
   string s[n];
   string ss="";
   for(int i=0;i<n;i++){
     cin>>s[i];
     ss+=s[i];
   }
   set<char> se;
   for(int i=0;i<ss.size();i++){
    se.insert(ss[i]);
   }
   for(auto i:se) cout<<i<<" ";
   cout<<endl;
}

int main(){
  int t; cin>>t;
  while(t--) solve();
}
