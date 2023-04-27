#include<bits/stdc++.h>
using namespace std;

void solve() {
    string str; cin>>str;
    stack<int> stk;
    stk.push(-1);
    int result=0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(') stk.push(i);
        else {
            if (!stk.empty()) stk.pop();
            if (!stk.empty())
                result = max(result, i - stk.top());
            else
                stk.push(i);
        }
    }

    cout<<result<<endl;
    }

int main() {
     int t; cin>>t;
     while(t--) solve();
}
