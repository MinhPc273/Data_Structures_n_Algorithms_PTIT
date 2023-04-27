#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    long long k; cin>>k;
    long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    long long cnt=0;
    sort(a,a+n);
    for(int i=0;i<=n-3;i++) {
        for(int j=i+1;j<=n-2;j++) {
            long long h=k-a[i]-a[j];
            int tmp = lower_bound(a+j+1,a+n,h) - a;
            //cout<<tmp-j-1<<" ";
            cnt+=(tmp-j-1);
        }
    }
    cout<<cnt<<endl;
}

int main() {
     int t; cin>>t;
     while(t--) solve();
}
