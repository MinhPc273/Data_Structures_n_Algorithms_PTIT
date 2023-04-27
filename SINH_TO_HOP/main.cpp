#include<bits/stdc++.h>
using namespace std;

void output(int k, int a[]){
   for(int i=1;i<=k;i++) cout<<a[i];
   cout<<" ";
}

void sinh(int n, int k, int a[]){
   for(int i=1;i<=k;i++) a[i]=i;
   //output(k,a);
   int e=1;
   while(e){
    int j;
    for(j=k;j>0;j--){
        if(n-k+j>a[j]) break;
    }
    if(j!=0){
        output(k,a);
        a[j]++;
        for(int i=j;i<=k;i++) a[i]=a[j]+i-j;
   }
   else{
    output(k,a);
    e=0;
   }
}
}

void solve(){
   int n,k; cin>>n>>k;
   int a[k+1];
   sinh(n,k,a);
}

int main(){
  int t; cin>>t;
  while(t--){
    solve();
    cout<<endl;
  }
}
