#include<bits/stdc++.h>
using namespace std;

void back_track(int i,int n,int a[],string res,set<string> &s) {
    string tmp=res;
    for(int j=i+1;j<=n;j++){
        if(a[i]<a[j]){
            res=res+to_string(a[j])+" ";
            s.insert(res);
            back_track(j,n,a,res,s);
        }
        res=tmp;
    }
}

void solve(){
    int n; cin>>n;
    int a[n+1];
    set<string> s;
    string res="";
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        res=to_string(a[i])+" ";
        back_track(i,n,a,res,s);
    }
    for(auto i:s) cout<<i<<endl;
}

int main(){
   solve();
}
