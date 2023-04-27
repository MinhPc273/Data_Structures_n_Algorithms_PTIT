#include<bits/stdc++.h>
using namespace std;

long b[100005],c[100005];

bool cmp(int a,int b){
    return a>b;
}

void solve(){
   int n; cin>>n;
   long a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   int h=0,k=0;
   for(int i=0;i<n;i++){
    if(i%2==0) b[h++]=a[i];
    else c[k++]=a[i];
   }
   sort(b,b+h);
   sort(c,c+k,cmp);
   h=0,k=0;
   for(int i=0;i<n;i++){
    if(i%2==0) cout<<b[h++]<<" ";
    else cout<<c[k++]<<" ";
   }
}

int main(){
  solve();
}
