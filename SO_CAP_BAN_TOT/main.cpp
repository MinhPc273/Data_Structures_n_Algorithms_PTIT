#include <bits/stdc++.h>
using namespace std;

bool cmp(string a,string b) {
    return a.size()<b.size();
}

void solve() {
   int n,k; cin>>n>>k;
   int len[n];
   for(int i=0;i<n;i++) {
    string s; cin>>s;
     len[i]=s.size();
   }
    //sort(len,len+n);
    int cnt=0;
    for(int i=0;i<n;i++) {
        cout<<len[i]<<" ";
        int tmp;
        if(i+k>=n) tmp=upper_bound(len+i+1,len+n,len[i])-len-(i+1);
        else tmp=upper_bound(len+i+1,len+i+k+1,len[i])-len-(i+1);
        cout<<tmp<<endl;
        cnt+=tmp;
    }
    //cout<<cnt<<endl;
}

int main() {
     solve();
}





