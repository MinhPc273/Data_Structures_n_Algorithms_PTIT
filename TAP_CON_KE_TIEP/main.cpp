#include <bits/stdc++.h>
using namespace std;

void sinh(int n, int k,int a[]){
    int j;
     for(j=k;j>0;j--){
        if(n-k+j>a[j]) break;
     }
    if(j!=0){
        a[j]++;
     for(int i=j+1;i<=k;i++) a[i]=a[j]+i-j;
     for(int i=1;i<=k;i++) cout<<a[i]<<" ";
    }
    else{
        for(int i=1;i<=k;i++) cout<<i<<" ";
    }
}

void solve(){
   int n,k; cin>>n>>k;
   int a[k+1];
   for(int i=1;i<=k;i++) cin>>a[i];
   sinh(n,k,a);
   cout<<endl;
}

int main(){
   int t; cin>>t;
   while(t--) solve();
}
