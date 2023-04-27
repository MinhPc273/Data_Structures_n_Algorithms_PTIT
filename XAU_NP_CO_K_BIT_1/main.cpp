#include<bits/stdc++.h>
using namespace std;

int check(int n,int a[],int k) {
   for(int i=1;i<=n;i++) {
    if(a[i]==1) k--;
   }
   return k;
}

void output(int n,int a[]) {
   for(int i=1;i<=n;i++) cout<<a[i];
   cout<<endl;
}

void sinh(int n,int a[],int k) {
  for(int i=1;i<=n;i++) a[i]=0;
  while(1){
    int j;
    for(j=n;j>0;j--){
        if(a[j]==0) break;
    }
    if(j!=0) {
        if(check(n,a,k)==0) output(n,a);
        for(int i=j;i<=n;i++) a[i]=1-a[i];
    }
    else {
        if(check(n,a,k)==0) output(n,a);
        break;
    }
  }
}

void solve(){
   int n,k; cin>>n>>k;
   int a[n+1];
   sinh(n,a,k);
}

int main() {
    int t; cin>>t;
    while(t--) {
        solve();
        cout<<endl;
    }
}
