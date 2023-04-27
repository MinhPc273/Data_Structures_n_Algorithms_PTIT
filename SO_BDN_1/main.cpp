#include<bits/stdc++.h>
using namespace std;

void solve() {
   int n; cin>>n;
   queue<string> q;
   int cnt=0;
   q.push("1");
   while(1) {
     string s1=q.front();
     q.pop();
     if(stoi(s1)>n) break;
     cnt++;
     string s2=s1;
     s1+="0"; s2+="1";
     q.push(s1);
     q.push(s2);
   }
   cout<<cnt<<endl;
}

int main() {
    int t; cin>>t;
    while(t--) solve();
}
