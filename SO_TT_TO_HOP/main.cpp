#include<bits/stdc++.h>
using namespace std;

int check(int k,int a[],int b[]){
   for(int i=1;i<=k;i++){
    if(a[i]!=b[i]) return 0;
   }
   return 1;
}

void sinh(int n,int k,int a[],int b[]){
   for(int i=1;i<=k;i++) a[i]=i;
   int dem=0;
   while(1){
    int j;
    for(j=k;j>0;j--){
        if(a[j]<n-k+j) break;
    }
    if(j!=0){
        dem++;
        if(check(k,a,b)){
            cout<<dem<<endl;
            return;
        }
        a[j]++;
        for(int i=j;i<=n;i++) a[i]=i-j+a[j];
    }
    else{
            dem++;
            cout<<dem<<endl;
            return;
    }
   }
}



void solve(){
  int n,k;
  cin>>n>>k;
  int a[k+1],b[k+1];
  for(int i=1;i<=k;i++) cin>>b[i];
  sinh(n,k,a,b);
}



int main(){
  int t; cin>>t;
  while(t--) solve();
}
