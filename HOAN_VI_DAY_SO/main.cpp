#include<bits/stdc++.h>
using namespace std;

void output(int n, int a[],int b[]){
    for(int i=1;i<=n;i++) cout<<b[a[i]]<<" ";
    cout<<endl;
}

void sinh(int n,int a[],int b[]){
   for(int i=1;i<=n;i++) a[i]=i;
   while(1){
    int k;
    for(k=n-1;k>0;k--){
        if(a[k]<a[k+1]) break;
    }
    //cout<<k<<endl;
    if(k!=0){
          output(n,a,b);
          sort(a+k+1,a+n+1);
          for(int i=k+1;i<=n;i++){
            if(a[i]>a[k]){
                swap(a[i],a[k]);
                break;
            }
          }
    }
    else{
            output(n,a,b);
            return;
    }
    }
   }

void solve(){
    int n; cin>>n;
    int a[n+1],b[n+1];
    for(int i=1;i<=n;i++) cin>>b[i];
    sort(b+1,b+n+1);
    sinh(n,a,b);
}

int main(){
   solve();
}
