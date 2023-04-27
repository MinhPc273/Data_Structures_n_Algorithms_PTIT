#include<bits/stdc++.h>
using namespace std;

int snt[1000005];

void sang(){
    for(int i=0;i<1000005;i++) snt[i]=1;
    snt[0]=0,snt[1]=0;
    for(int i=2;i<1000005;i++){
        if(snt[i]){
            for(int j=2*i;j<1000005;j+=i) snt[j]=0;
        }
    }
}

void solve(){
   int n; cin>>n;
   sang();
   for(int i=2;i<n;i++){
    if( snt[i] && snt[n-i]){
       cout<<i<<" "<<n-i<<endl;
       return;
       }
   }
   cout<<-1<<endl;
}

int main(){
   int t; cin>>t;
   while(t--) solve();
}
