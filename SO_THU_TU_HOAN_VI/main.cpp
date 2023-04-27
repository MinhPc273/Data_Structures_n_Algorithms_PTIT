#include<bits/stdc++.h>
using namespace std;

int output(int n, int a[], int b[]){
     for(int i=1;i<=n;i++){
        if(a[i]!=b[i]) return 0;
     }
     return 1;
}

void sinh(int n,int a[],int b[]){
    for(int i=1;i<=n;i++) a[i]=i;
    int dem=0;
    while(1){
        int k;
        for(k=n-1;k>0;k--){
            if(a[k+1]>a[k]) break;
        }
       if(k!=0){
            dem++;
            if(output(n,a,b)){
                cout<<dem<<endl;
                return;
            }
         sort(a+k+1,a+n+2);
         for(int i=k+1;i<=n;i++){
            if(a[i]>a[k]){
                swap(a[i],a[k]);
                break;
            }
         }
       }
       else{
        cout<<dem<<endl;
        return;
       }
    }
}


void solve(){
  int n; cin>>n;
  int a[n+1],b[n+1];
  for(int i=1;i<=n;i++) cin>>b[i];
  sinh(n,a,b);
}

int main(){
  int t; cin>>t;
  while(t--){
    solve();
    cout<<endl;
  }
}
