#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n; cin>>n;
   int m=n;
    int a[n];
    vector<int> v[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        v[n-1].push_back(a[i]);
    }
     while(n--){
        for(int i=0;i<n;i++){
                a[i]=a[i]+a[i+1];
                v[n-1].push_back(a[i]);
        }
     }
     for(int i=0;i<m;i++){
        cout<<"[";
        for(int j=0;j<v[i].size();j++){
            if(j!= v[i].size()-1) cout<<v[i][j]<<" ";
            else cout<<v[i][j];
        }
        cout<<"] ";
     }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
