#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct cmp{
   bool operator() (ll a,ll b) {
     return a>b;
   }
};

void solve() {
   int n; cin>>n;
   ll x;
   priority_queue <ll,vector<ll>,cmp> pq;
   for(int i=0;i<n;i++){
    cin>>x;
    pq.push(x);
   }
   ll sum=0;
   while(pq.size()!=1){
     x=pq.top(); pq.pop();
     sum+=(x+pq.top());
   //cout<<x<<" "<<pq.top()<<endl;
     pq.push(x+pq.top());
     pq.pop();

   }
   cout<<sum<<endl;
}

int main() {
  int t; cin>>t;
  while(t--)
    solve();
}
