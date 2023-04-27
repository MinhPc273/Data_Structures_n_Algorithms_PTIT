#include<bits/stdc++.h>
using namespace std;

int check(string s) {
      stack<char> st;
     for(auto& ch:s) {
        if(ch==')') {
            //if(st.empty()) return 0;
            char top=st.top();
            st.pop();
            int flag=1;
            while( !st.empty() && top!='(') {
                    if(top=='+' || top=='-' || top=='*' || top=='/') flag=0;
                    top=st.top();
                    st.pop();
                  }
            if(flag==1) return 1;
        }else st.push(ch);
     }
     return 0;
}

void solve() {
    string s;
    cin>>s;
    if(check(s)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int main(){
   int t; cin>>t;
   while(t--) solve();
}
