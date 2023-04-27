#include<bits/stdc++.h>
using namespace std;

void solve() {
   long long n; cin>>n;
   queue<string> q;
   q.push("1");
   while(1){
      string s1= q.front();
      q.pop();
      if(stoll(s1)%n==0) {
        cout<<s1<<endl;
        return;
      }
      string s2=s1;
      s1+="0"; s2+="1";
      q.push(s1);
      q.push(s2);
   }
}

int main() {
   int t; cin>>t;
   while(t--) solve();
}
