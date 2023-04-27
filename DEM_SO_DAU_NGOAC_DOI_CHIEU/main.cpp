#include<bits/stdc++.h>
using namespace std;

void output(string s) {
    stack<char> st;
    char top;
    for(auto& ch:s) {
        if(!st.empty()) top=st.top();
        st.push(ch);
        if(st.size()>1) {
            if(ch==')' && top=='(') {
            st.pop();
            st.pop();
        }
        }
    }
    /////
    int i=0,dem=0;
    while( !st.empty() ) {
        if(i%2 ==0 && st.top()=='(') dem++;
        if(i%2 ==1 && st.top()==')') dem++;
        i++;
        st.pop();
    }
    cout<<dem<<endl;
}

void solve() {
   string s; cin>>s;
   output(s);
}

int main() {
    int t; cin>>t;
    while(t--) solve();
}
