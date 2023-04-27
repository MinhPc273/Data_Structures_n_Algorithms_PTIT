#include<bits/stdc++.h>
using namespace std;

void in(int n,int a[],string s){
    for(int i=1;i<=n;i++){
        cout<<s[a[i]-1];
    }
    cout<<" ";
}

void sinh_hoan_vi(int n,int a[],string s){
     for(int i=1;i<=n;i++) a[i]=i;
     int k;
     while(1){
        for(k=n-1;k>0;k--){
            if(a[k+1]>a[k]) break;
        }
        if(k!=0){
            in(n,a,s);
            sort(a+k+1,a+n+1);
            for(int i=k+1;i<=n;i++){
                if(a[k]<a[i]){
                    swap(a[k],a[i]);
                    break;
                }
            }
        }
        else{
            in(n,a,s);
            return;
        }
     }
}

void solve(){
    string s; cin>>s;
    int n=s.size();
    //cout<<n<<endl;
    int a[n+1];
    sinh_hoan_vi(n,a,s);
}

int main(){
   int t; cin>>t;
   while(t--){
    solve();
    cout<<endl;
   }
}
