#include <bits/stdc++.h>
using namespace std;

void sinh(int n, int k,int a[],set<int> &s){
    int s1=s.size();
    int j;
     for(j=k;j>0;j--){
        if(n-k+j>a[j]) break;
     }
    if(j!=0){
        a[j]++;
     for(int i=j+1;i<=k;i++) a[i]=a[j]+i-j;
     for(int i=1;i<=k;i++) s.insert(a[i]);
     cout<<s.size()-s1<<endl;
    }
    else{
        cout<<k<<endl;
    }
}

void solve(){
   int n,k; cin>>n>>k;
   int a[k+1];
   set<int> s;
   for(int i=1;i<=k;i++){
    cin>>a[i];
    s.insert(a[i]);
   }
   sinh(n,k,a,s);
}

int main(){
   int t; cin>>t;
   while(t--) solve();
}
