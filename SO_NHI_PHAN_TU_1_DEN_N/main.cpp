#include<bits/stdc++.h>
using namespace std;

void solve() {
   int n; cin>>n;
   queue<string> q;
   q.push("1");
   while(n--) {
     string s1=q.front();
     q.pop();
     cout<<s1<<" ";
     string s2=s1;
     s1+="0"; s2+="1";
     q.push(s1);
     q.push(s2);
   }
   cout<<endl;
}

int main() {
    int t; cin>>t;
    while(t--) solve();
}
