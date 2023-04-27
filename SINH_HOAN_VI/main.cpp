#include<bits/stdc++.h>
using namespace std;

void output(int n,int a[]){
  for(int i=1;i<=n;i++) cout<<a[i];
  cout<<" ";
}

void sinh(int n, int a[]){
  for(int i=1;i<=n;i++) a[i]=i;
  int e=1;
  while(e){
    int k;
    for(k=n-1;k>0;k--){
        if(a[k] < a[k+1]) break;
    }
    //cout<<k<<endl;
    if(k!=0){
        output(n,a);
        sort(a+k+1,a+n+1);
        for(int i=k+1;i<=n;i++){
            if(a[k]<a[i]){
                swap(a[i],a[k]);
                break;
            }
        }
    }
    else{
        output(n,a);
        e=0;
    }
  }
}

void solve(){
  int n; cin>>n;
  int a[n+1];
  sinh(n,a);
}

int main(){
  int t; cin>>t;
  while(t--){
    solve();
    cout<<endl;
  }
}
