#include<bits/stdc++.h>
using namespace std;

void solve(){
   string s; cin>>s;
   int k;
   for(k=s.size()-1; k>=0;k--){
    if(s[k]=='1') break;
   }
    if(k==-1) k++;
   for(int i=k;i<s.size();i++){
    if(s[i]=='1') s[i]='0';
    else s[i]='1';
   }
   cout<<s<<endl;
}

int main(){
  int t; cin>>t;
  while(t--) solve();
}
