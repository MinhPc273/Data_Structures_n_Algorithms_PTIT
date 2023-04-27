#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n; cin>>n;
   vector<int> v;
   for(int i=0;i<n;i++){
    int x; cin>>x;
    v.push_back(x);
   }
   vector<int> tmp=v;
   sort(v.begin(),v.end());
   for(int i=0;i<v.size();i++){
    if(v[i]!=tmp[i]){
        cout<<i+1<<" ";
        break;
    }
   }
   for(int i=v.size()-1;i>0;i--){
    if(v[i]!=tmp[i]){
        cout<<i+1<<endl;
        break;
    }
   }
}

int main(){
   int t; cin>>t;
   while(t--) solve();
}
