#include<bits/stdc++.h>
using namespace std;

int n,a[105],s;
string ans;


void Try(int i,int k){
    if(ans=="YES") return;
    if(k*2==s) {
        ans="YES";
        return;
    }
    if(i!=n) {
        int tmp=k+a[i+1];
        if(tmp*2<=s) Try(i+1,tmp);
        Try(i+1,k);
    }
}

void solve(){
    cin>>n; s=0;
    for(int i=1;i<=n;i++) {
        cin>>a[i];
        s+=a[i];
    }
    ans="NO";
    if(s%2 == 0) Try(0,0);
    cout<<ans<<endl;
}

int main() {
   int t; cin>>t;
   while(t--) solve();
}
