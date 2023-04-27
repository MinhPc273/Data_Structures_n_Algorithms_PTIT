#include<bits/stdc++.h>
using namespace std;

void in(int n,int a[],string b[],int k){
   for(int i=1;i<=k;i++){
    cout<<b[a[i]]<<" ";
   }
   cout<<endl;
}

void sinh(int n,int a[],string b[],int k){
     for(int i=1;i<=k;i++) a[i]=i;
     while(1){
        int j;
        for(j=k;j>0;j--){
            if(a[j]<j+n-k) break;
        }
        if(j!=0){
            in(n,a,b,k);
            a[j]++;
            for(int i=j+1;i<=k;i++) a[i]=a[j]+i-j;
        }
        else{
            in(n,a,b,k);
            break;
        }
     }
}

void solve(){
   int n,k; cin>>n>>k;
   set<string> s;
   for(int i=0;i<n;i++){
      string x; cin>>x;
      s.insert(x);
   }
   n=s.size();
   string b[n+1];
   int i=1;
   for(auto j:s) b[i++] = j;
   int a[k+1];
   sinh(n,a,b,k);
}

int main(){
  solve();
}
