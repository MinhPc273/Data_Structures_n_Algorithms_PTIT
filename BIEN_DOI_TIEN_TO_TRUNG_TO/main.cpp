#include<bits/stdc++.h>
using namespace std;

void output(string s) {
        //reverse(s.begin(),s.end());
        //cout<<s<<endl;
        stack<string> st;
        for(int i=s.size()-1;i>=0;i--) {
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/') {
                string s1 = st.top();   st.pop();
                string s2 = st.top();   st.pop();
                string s3= "("+s1+s[i]+s2+")";
                st.push(s3);
            }
            else st.push(string(1,s[i]));
        }
        while(!st.empty()) {
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
}

void solve() {
     string s; cin>>s;
     output(s);
}

int main() {
    int t; cin>>t;
    while(t--) solve();
}
