#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin>>n;
  string s[n];
  for(int i=0;i<n;i++) cin>>s[i];
  string a="",b="";
  sort(s,s+n);
  for(int i=0;i<n;i++){
    if(i%2==0) a+=s[i];
    else b+=s[i];
  }
  cout<<stol(a)+stol(b)<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--) solve();
}
