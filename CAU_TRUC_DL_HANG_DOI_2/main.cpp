#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    queue<string> qw;
    cin.ignore();
    while(n--) {
        string s; getline(cin,s);
        if(s=="PRINTFRONT") {
           if(qw.empty()) cout<<"NONE"<<endl;
           else cout<<qw.front()<<endl;
        }
        else if(s=="POP") {
           if(!qw.empty()) qw.pop();
        }
        else {
            stringstream ss(s);
            string tmp;
            while(ss>>tmp);
            qw.push(tmp);
        }
    }
}

int main() {
   solve();
}
