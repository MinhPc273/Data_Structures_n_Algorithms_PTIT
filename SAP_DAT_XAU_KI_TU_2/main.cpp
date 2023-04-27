#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    map<char,int> m;
    for(int i=0;i<s.size();i++) m[s[i]]++;
    int maxx=0; //ki tu xuat hien nhieu nhat
    for(auto i:m){
        maxx=max(maxx,i.second);
    }
    if((s.size()+1)/maxx >= n ) cout<<1<<endl;
    else cout<<-1<<endl;
}

int main() {
   int t; cin>>t;
   while(t--) solve();
}
