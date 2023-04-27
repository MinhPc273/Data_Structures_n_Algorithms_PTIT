#include<bits/stdc++.h>
using namespace std;

int main() {
   int t; cin>>t;
   while(t--) {
     int n; cin>>n;
     int a[n],vs[n];
     for(int i=0;i<n;i++) {
        cin>>a[i];
        vs[i]=1;
     }
     sort(a,a+n);
     int cnt=0;
     for(int i=n-1;i>=0;i--) {
            //cout<<a[i]<<endl;
        if(vs[i]) {
            vs[i]=0;
            int tmp=lower_bound(a+i,a+n,a[i]*2)-a;
            if(tmp != n) {
                a[i]=0;
                a[tmp]=0;
                cnt++;
            }
        }
     }
     //for(int i=n-1;i>=0;i--) cout<<a[i]<<endl;
     cout<<n-cnt<<endl;
   }
}
