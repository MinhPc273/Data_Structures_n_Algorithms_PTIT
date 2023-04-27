#include<bits/stdc++.h>
using namespace std;

void solve() {
   int n; cin>>n;
   queue<string> q;
   q.push("6");
   q.push("8");
   vector<string> v;
   int cnt=0;
   while(1){
     string s1=q.front();
     q.pop();
     if(cnt>=n) break;
     cnt++;

     string tmp=s1;
     reverse(tmp.begin(),tmp.end());
     //tmp.re
     v.push_back(s1+tmp);
     string s2=s1;
     s1+="6";
     s2+="8";
     q.push(s1);
     q.push(s2);
   }
   //sort(v.begin(),v.end());
   for(auto i:v) cout<<i<<" ";
   cout<<endl;
}

int main() {
    int t; cin>>t;
    while(t--) solve();
}
