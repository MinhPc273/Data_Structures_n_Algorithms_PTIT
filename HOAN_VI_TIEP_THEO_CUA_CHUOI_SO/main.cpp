#include<bits/stdc++.h>
using namespace std;

void sinh(int n,int a[]){
    int k;
    for(k=n-1;k>0;k--){
        if(k==0) break;
        if(a[k]<a[k+1]) break;
    }
    //cout<<k<<endl;
    if(k!=0){
        sort(a+k+1,a+n+1);
        for(int i=k;i<=n;i++){
            if(a[i]>a[k]){
                swap(a[i],a[k]); break;
            }
        }
        for(int i=1;i<=n;i++) cout<<a[i];
        cout<<endl;
    }
    else{
        cout<<"BIGGEST"<<endl;
    }
}

void solve(){
   int k; cin>>k;
   cin.ignore();
   string s; cin>>s;
   int n=s.size();
   int a[n+1];
   for(int i=1;i<=n;i++) a[i]=s[i-1]-'0';
   cout<<k<<" ";
   sinh(n,a);
}

int main(){
    int t; cin>>t;
    while(t--) solve();
}
