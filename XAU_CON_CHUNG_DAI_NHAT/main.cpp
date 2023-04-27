#include<bits/stdc++.h>
using namespace std;

void solve() {
   string s1,s2; cin>>s1>>s2;
   int n=s1.size(),m=s2.size();
   int dp[n+1][m+1];
   for(int i=0;i<=n;i++) {
     for(int j=0;j<=m;j++) dp[i][j]=0;
   }
   for(int i=0;i<=n;i++) {
    for(int j=0;j<=m;j++) {
        if(i==0 || j==0) dp[i][j]=0;
        else { //i>0 && j>0
            dp[i][j]=dp[i-1][j];
            if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1] + 1;
            dp[i][j]=max(dp[i][j-1],dp[i][j]);
            //dp[i][j]=1;
        }
    }
   }
   /*
   for(int i=0;i<=n;i++) {
    for(int j=0;j<=m;j++) cout<<dp[i][j]<<" ";
    cout<<endl;
   } */
   cout<<dp[n][m]<<endl;
}

int main() {
   int t; cin>>t;
   while(t--) solve();
}
