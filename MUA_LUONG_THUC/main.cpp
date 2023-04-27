#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n,s,m; cin>>n>>s>>m;
  int s_l=s-s/7; //so ngay co the mua lt
  int n_l=n*s_l; //so luong thuc toi da co the mua
  int m_l=s*m; //so luong thuc can de song
  if(n_l<m_l) cout<<-1<<endl;
  else{
    for(int i=1;;i++){
        if(n*i>=m_l){
            cout<<i<<endl;
            break;
        }
    }
  }
}

int main(){
   int t; cin>>t;
   while(t--) solve();
}
