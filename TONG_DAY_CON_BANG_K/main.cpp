#include<bits/stdc++.h>
using namespace std;

void output(int n,int a[],int b[]){
  for(int i=1;i<=n;i++){
    if(a[i]==1) cout<<b[i]<<" ";
  }
  cout<<endl;
}

int check(int n,int a[], int m,int b[],int &dem){
    int s=0;
  for(int i=1;i<=n;i++){
    if(a[i]==1) s+=b[i];
  }
  if(s==m){
    dem++;
    return 1;
  }
  return 0;
}

void sinh(int n,int a[],int m,int b[],int &dem){
   for(int i=1;i<=n;i++) a[i]=0;
   //output(n,a);
   int endd=1;
   while(endd){
    int k;
    for(k=n;k>0;k--){
        if(a[k]==0) break;
    }
    if(k==0) endd=0;
    else{
        for(int i=k;i<=n;i++) a[i]=1-a[i];
        if(check(n,a,m,b,dem)) output(n,a,b);
    }
   }
}
void solve(){
  int n,m; cin>>n>>m;
  int a[n+1],b[n+1];
  for(int i=1;i<=n;i++) cin>>b[i];
  int dem=0;
   sinh(n,a,m,b,dem);
  cout<<dem;
}

int main(){
  solve();
}
