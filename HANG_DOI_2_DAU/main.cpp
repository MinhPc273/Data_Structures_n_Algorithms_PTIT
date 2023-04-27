#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    cin.ignore();
    string s;
    deque<string> dq;
    while(n--) {
        getline(cin,s);
        if(s=="PRINTFRONT") {
            if(dq.empty()) cout<<"NONE"<<endl;
            else cout<<dq.front()<<endl;
        }
        else if(s=="PRINTBACK") {
            if(dq.empty()) cout<<"NONE"<<endl;
            else cout<<dq.back()<<endl;
        }
        else if(s=="POPFRONT") {
            if(!dq.empty()) dq.pop_front();
        }
        else if(s=="POPBACK") {
            if(!dq.empty()) dq.pop_back();
        }
        else {
            stringstream ss(s);
            vector<string> v;
            string tmp;
            while(ss>>tmp) v.push_back(tmp);
            if(v[0]=="PUSHFRONT") dq.push_front(v[1]);
            else dq.push_back(v[1]);
        }
    }
}

int main() {
    solve();
}
