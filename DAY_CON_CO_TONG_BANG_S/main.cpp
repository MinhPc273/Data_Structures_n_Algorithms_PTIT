#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



void solve() {
   int n,s; cin>>n>>s;
   int a[n];
   int dp[s+1]={0};
   for(int i=0;i<n;i++) cin>>a[i];
   //for(int i=1;i<=s;i++) dp[i]=0;
   dp[0]=1;
   for(int i=0;i<n;i++) {
    for(int j=s;j>=0;j--) {
        int k=j+a[i];
        if(dp[j]==1 && k<=s) dp[k]=1;
    }
   }
   if(dp[s]) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}

int main() {
    int t; cin>>t;
    while(t--) solve();
}
