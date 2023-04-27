#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n; cin>>n;
   int a[n],dem=0;
   for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<n-1;i++){
    int miin=a[i],k=i;
    for(int j=i+1;j<n;j++){
        if(miin>a[j]){
            miin=a[j];
            k=j;
        }
    }
    if(i!=k){
        dem++;
        swap(a[i],a[k]);
    }
   }
   cout<<dem<<endl;
}

int main(){
    int t; cin>>t;
    while(t--) solve();
}
