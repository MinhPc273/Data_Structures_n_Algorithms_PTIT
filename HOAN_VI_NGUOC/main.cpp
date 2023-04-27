#include<bits/stdc++.h>
using namespace std;

void output(int n,int a[],vector<string> &vs){
    string s="";
  for(int i=1;i<=n;i++) s+=to_string(a[i]);
  vs.push_back(s);
}

void sinh(int n, int a[],vector<string> &vs){
  for(int i=1;i<=n;i++) a[i]=i;
  int e=1;
  while(e){
    int k;
    for(k=n-1;k>0;k--){
        if(a[k] < a[k+1]) break;
    }
    //cout<<k<<endl;
    if(k!=0){
        output(n,a,vs);
        sort(a+k+1,a+n+1);
        for(int i=k+1;i<=n;i++){
            if(a[k]<a[i]){
                swap(a[i],a[k]);
                break;
            }
        }
    }
    else{
        output(n,a,vs);
        e=0;
    }
  }
}

void solve(){
  vector<string> vs;
  int n; cin>>n;
  int a[n+1];
  sinh(n,a,vs);
  for(int i=vs.size()-1;i>=0;i--) cout<<vs[i]<<" ";
}

int main(){
  int t; cin>>t;
  while(t--){
    solve();
    cout<<endl;
  }
}
