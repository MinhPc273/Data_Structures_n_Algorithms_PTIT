#include <bits/stdc++.h>
using namespace std;

void sinh(string &n){
    int k;
    for(k=n.size()-1;k>0;k--){
        if(n[k]=='0') break;
    }
    for(int i=k;i<n.size();i++){
        if(n[i]=='0') n[i]='1';
        else  n[i]='0';
    }
}

void solve(){
   int t; cin>>t;
   while(t--){
     string n; cin>>n;
     sinh(n);
     cout<<n<<endl;
   }
}

int main(){
  solve();
}
