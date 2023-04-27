#include<bits/stdc++.h>
using namespace std;

void in(int n,int a[]){
  for(int i=0;i<n;i++) cout<<a[i]<<" ";
  cout<<endl;
}

void solve(){
   int n; cin>>n;
   int a[n];
   vector<int> v[n];
   for(int i=0;i<n;i++) cin>>a[i];
   bool flag = false;
   int index=1;
   for(int i=0;i<n-1;i++){
      flag = false;
      for(int j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
            flag = true;
        }
      }
      for(int j=0;j<n;j++) v[index].push_back(a[j]);
      index++;
      if(flag == false ) break;
   }
   for(int i=index-2;i>=1;i--){
    cout<<"Buoc "<<i<<": ";
    for(auto j:v[i]) cout<<j<<" ";
    cout<<endl;
   }
}

int main(){
   int t; cin>>t;
   while(t--) solve();
}
