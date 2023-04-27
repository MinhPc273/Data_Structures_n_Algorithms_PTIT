#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    int dp[n+1];
    a[0]=INT_MIN;
    for(int i=0;i<=n;i++) dp[i]=0;
    for(int i=1;i<=n;i++) {
        for(int j=0;j<i;j++) {
            if(a[i]>a[j]) dp[i]=max(dp[j]+1,dp[i]);
        }
    }
    //for(int i=0;i<=n;i++) cout<<dp[i]<<endl;
    cout<<*max_element(dp,dp+n+1)<<endl;
}

int main() {
     solve();
}
