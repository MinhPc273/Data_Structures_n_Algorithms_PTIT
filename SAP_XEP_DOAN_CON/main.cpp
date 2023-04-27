#include<bits/stdc++.h>
using namespace std;

int check(vector<int> v, int i){
   vector<int> a,b;
   for(int j=0;j<=i;j++) a.push_back(v[j]);
   for(int j=i+1;j<v.size();j++) b.push_back(v[j]);
   sort(v.begin(),v.end());
   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   a.insert(a.end(),b.begin(),b.end());
   if(a==v) return i;
   return 0;
}

void solve(){
   int n; cin>>n;
   vector<int> v;
   for(int i=0;i<n;i++){
    int x; cin>>x;
    v.push_back(x);
   }
   int dem=0;
   vector<int> d;
   for(int i=0;i<v.size()-1;i++){
    if(check(v,i)){
        dem++;
        d.push_back(check(v,i)+1);
    }
   }
   cout<<dem<<endl;
   if(dem){
    for(auto i:d) cout<<i<<" ";
   cout<<endl;
   }
}

int main(){
    int t; cin>>t;
    while(t--) solve();
}
