#include<bits/stdc++.h>
using namespace std;

void solve() {
   string s; cin>>s;
   stack<int> st;
   for(int i=0;i<s.size();i++) {
      if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/') {
        int last=st.top();  st.pop();
        int first=st.top(); st.pop();
        int tmp;
        if(s[i]=='+') tmp=first+last;
        if(s[i]=='-') tmp=first-last;
        if(s[i]=='*') tmp=first*last;
        if(s[i]=='/') tmp=first/last;
        st.push(tmp);
      } else st.push(s[i]-'0');
   }
   cout<<st.top()<<endl;
}

int main() {
    int t; cin>>t;
    while(t--) solve();
}
