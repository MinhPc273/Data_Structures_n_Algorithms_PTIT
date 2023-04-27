#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> v;
vector<int> vs(10,1);

void in() {
   for(int i=1;i<=n;i++) cout<<v[i];
   cout<<endl;
}

void Try(int i){
      for(int j=1;j<=n;j++) {
        if( vs[j] && abs(j-v[i-1])!=1 ){
            vs[j]=0;
            v.push_back(j);
            if(i==n) in();
            else Try(i+1);
            v.pop_back();
            vs[j]=1;
        }
      }
}

void solve() {
     cin>>n;
     v.clear();
     v.push_back(-1);
     Try(1);
}

int main() {
  int t; cin>>t;
  while(t--)
    solve();
}
