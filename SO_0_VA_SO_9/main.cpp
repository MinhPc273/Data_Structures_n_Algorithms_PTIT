#include<bits/stdc++.h>
using namespace std;

void solve() {
   int n; cin>>n;
   queue<string> q;
   q.push("9");
   while(1){
      string s1= q.front();
      q.pop();
      if(stoi(s1)%n==0) {
        cout<<s1<<endl;
        return;
      }
      string s2=s1;
      s1+="0"; s2+="9";
      q.push(s1);
      q.push(s2);
   }
}

int main() {
   int t; cin>>t;
   while(t--) solve();
}
