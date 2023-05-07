#include<bits/stdc++.h>
using namespace std;

string s;

int check(){
    stack<char> st;
    for(auto &ch:s){
        if(ch==')'){
            int flag=0;
            char top=st.top();
            st.pop();
            while(!st.empty() && top!='('){
                    if(top=='+' || top=='-' || top=='*' || top=='/') flag=1;
                    top=st.top();
                    st.pop();
                  }
            //st.pop();
           if(flag==0) return 1;
        }else st.push(ch);
    }
    return 0;
}

int main(){
   int t; cin>>t;
   while(t--){
    cin>>s;
    if(check()) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
   }
}
