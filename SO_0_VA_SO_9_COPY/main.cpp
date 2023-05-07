#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
 int t; cin>>t;
 while(t--) {
    ll n; cin>>n;
    queue<ll> q;
    q.push(9);
    while(1){
       ll f=q.front();
       q.pop();
       if(f%n==0){
        cout<<f<<endl;
        break;
       }
       q.push(f*10);
       q.push(f*10+9);
    }
 }
}
