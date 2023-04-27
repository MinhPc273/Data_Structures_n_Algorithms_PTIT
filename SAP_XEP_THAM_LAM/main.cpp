#include<bits/stdc++.h>
using namespace std;

int check(int n, pair<int,int> p[]){
    for(int i=0;i<=n/2;i++){
        int x=p[i].second + p[n-i-1].second ;
        if(x!=n-1) return 0;
    }
    return 1;
}

void solve(){
   int n; cin>>n;
   pair<int,int> p[n+1];
   for(int i=0;i<n;i++){
      cin>>p[i].first;
      p[i].second=i;
   }
   sort(p,p+n);
   if(check(n,p)) cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
}

int main(){
  int t; cin>>t;
  while(t--) solve();
}
