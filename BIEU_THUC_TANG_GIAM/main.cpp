#include<bits/stdc++.h>
using namespace std;

void solve() {
  string s; cin>>s;
  stack<int> st;
  int j=1;
  st.push(j);
  for(int i=0;i<s.size();i++) {
    if(s[i]=='D') st.push(++j);
    else {
            while(!st.empty()){
                cout<<st.top();
                st.pop();
            }
            st.push(++j);
        }
    }
    while(!st.empty()){
                cout<<st.top();
                st.pop();
            }
        cout<<endl;
}

int main() {
    int t; cin>>t;
    while(t--) solve();
}
