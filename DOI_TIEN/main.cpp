#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n; cin>>n;
   int cnt=0;
   int s[10]={1,2,5,10,20,50,100,200,500,1000};
    for(int i=9;i>=0;i--){
        if(s[i]<=n){
            cnt+=(n/s[i]);
            n=n-(n/s[i])*s[i];
            if(n==0) cout<<cnt<<endl;
        }
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}
