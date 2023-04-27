#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
   if(a.second != b.second) return a.second < b.second;
     return a.first < b.first;
}

void solve(){
   int n; cin>>n;
   pair<int,int> p[n];
   for(int i=0;i<n;i++){
    int x; cin>>x;
    p[i].first=x;
   }
   for(int i=0;i<n;i++){
    int x; cin>>x;
    p[i].second=x;
   }
   sort(p,p+n,cmp);
   int cnt=1,tmp=p[0].second;
   for(int i=0;i<n-1;i++) {
      if(tmp<=p[i+1].first){
        cnt++;
        tmp=p[i+1].second;
      }
   }
   cout<<cnt<<endl;
}

int main(){
    int t; cin>>t;
    while(t--) solve();
}

