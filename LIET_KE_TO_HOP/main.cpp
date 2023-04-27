#include<bits/stdc++.h>
using namespace std;

void output(int k,int a[],int b[]){
    for(int i=1;i<=k;i++) cout<<b[a[i]]<<" ";
    cout<<endl;
}

void sinh(int n,int k,int a[],int b[]){
   for(int i=1;i<=k;i++) a[i]=i;
   while(1){
    int j;
    for(j=k;j>0;j--){
        if(a[j]<n-k+j) break;
    }
    if(j!=0){
        output(k,a,b);
        a[j]++;
        for(int i=j+1;i<=k;i++) a[i]=a[j]+i-j;
    }
    else{
        output(k,a,b);
        return;
    }
   }
}

void solve(){
  int n,k; cin>>n>>k;
  set<int> s;
  for(int i=1;i<=n;i++){
    int x; cin>>x;
    s.insert(x);
  }
  n=s.size();
  int a[n+1],b[n+1];
  int j=1;
  for(auto i:s){
    b[j]=i; j++;
  }
  //for(int i=1;i<=k;i++) cout<<b[i]<<endl;
  sinh(n,k,a,b);
}

int main(){
  solve();
}
