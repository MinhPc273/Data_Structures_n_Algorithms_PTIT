#include<bits/stdc++.h>
using namespace std;

int main() {
   int t; cin>>t;
   while(t--) {
    int n;
    string s;
    cin>>n>>s;
    map<char,long long> m;
    priority_queue<long long> q;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    for(auto i:m) {
        q.push(i.second);
    }
    while(n--){
        long long tmp=q.top();
        q.pop();
        q.push(tmp-1);
    }
    long long l=0;
    while(!q.empty()) {
        long long tmp=q.top();
        q.pop();
        l+=tmp*tmp;
    }
    cout<<l<<endl;
}
}
