#include<bits/stdc++.h>
using namespace std;

void output(int n,int a[]){
  for(int i=1;i<=n;i++) cout<<a[i]<<" ";
  cout<<endl;
}

int check(int n,int a[]){
  for(int i=1;i<=n/2;i++){
    if(a[i]!=a[n-i+1]) return 0;
  }
  return 1;
}

void sinh(int n,int a[]){
   for(int i=1;i<=n;i++) a[i]=0;
   output(n,a);
   int endd=1;
   while(endd){
    int k;
    for(k=n;k>0;k--){
        if(a[k]==0) break;
    }
    if(k==0) endd=0;
    else{
        for(int i=k;i<=n;i++) a[i]=1-a[i];
        if(check(n,a)) output(n,a);
    }
   }
}
void solve(){
  int n; cin>>n;
  int a[n+1];
   sinh(n,a);
}

int main(){
  solve();
}
