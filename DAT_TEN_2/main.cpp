#include<bits/stdc++.h>
using namespace std;

void output(int k,int a[], string b[]){
   for(int i=1;i<=k;i++){
    cout<<b[a[i]];
   }
   cout<<endl;
}

void sinh(int n,int k,int a[],string b[]){
   for(int i=1;i<=k;i++) a[i]=i;
   while(1){
    int j;
    for(j=k;j>0;j--){
        if(a[j]<n-k+j) break;
    }
    if(j!=0){
        output(k,a,b);
        a[j]++;
        for(int i=j;i<=k;i++) a[i]=i-j+a[j];
    }
    else{
            output(k,a,b);
            return;
    }
   }
}



void solve(){
   int n,k; cin>>n>>k;
   int a[k+1];
   string b[n+1];
   int j=65;
   for(int i=1;i<=n;i++) b[i]=j++;
   sinh(n,k,a,b);
}

int main(){
   int t; cin>>t;
   while(t--) solve();
}
