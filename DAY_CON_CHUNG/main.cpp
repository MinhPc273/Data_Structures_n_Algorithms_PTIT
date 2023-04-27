#include<bits/stdc++.h>
using namespace std;

map<long,long> ma;

void wb(long n,long a[],long m,long b[]){
   map<long,long> ma1;
   for(long i=0;i<n;i++){
     cin>>a[i];
     ma1[a[i]]++;
   }
   for(long i=0;i<n;i++){
    ma[a[i]]=min(ma[a[i]],ma1[a[i]]);
   }
   for(long i=0;i<m;i++){
    ma[b[i]]=min(ma[b[i]],ma1[b[i]]);
   }
}

void solve() {
   long n,m,k; cin>>n>>m>>k;
   long a[n],b[m],c[k];
  // map<long,long> ma;
   ma.clear();
   for(long i=0;i<n;i++){
     cin>>a[i];
     ma[a[i]]++;
   }
   wb(m,b,n,a);
   wb(k,c,m,b);
   int check=0;
    for(auto i:ma){
      for(long j=0;j<i.second;j++){
        cout<<i.first<<" ";
        check++;
      }
   }
   if(check==0) cout<<"NO";
   cout<<endl;
}

int main() {
   long t; cin>>t;
   while(t--) solve();
}
