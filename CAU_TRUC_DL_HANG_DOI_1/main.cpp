#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    queue<int> qw;
    while(n--){
        int k; cin>>k;
        switch(k){
             case 1: {
                cout<<qw.size()<<endl;
                break;}
             case 2: {
                if(qw.empty()) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                break;}
             case 3: {
                int x; cin>>x;
                qw.push(x);
                break;}
             case 4: {
                if(!qw.empty()) qw.pop();
                break;}
             case 5: {
                if(qw.empty()) cout<<-1<<endl;
                else cout<<qw.front()<<endl;
                break;}
             case 6: {
                 if(qw.empty()) cout<<-1<<endl;
                 else cout<<qw.back()<<endl;
                 break;}

        }
    }
}

int main() {
    int t; cin>>t;
    while(t--) solve();
}
