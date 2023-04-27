#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin>>n;
  int s7=n/7;
  int s4=0;
  int check=1;
    for(int i=s7;i>=0;i--) {
        if((n-i*7)%4==0 ) {
            s4=(n-i*7)/4;
            s7=i;
            check=0;
            break;
        }
    }
  if(check) cout<<-1;
  else {
    for(int i=0;i<s4;i++) cout<<4;
    for(int i=0;i<s7;i++) cout<<7;
  }
  cout<<endl;
}

int main() {
   int t; cin>>t;
   while(t--) solve();
}
