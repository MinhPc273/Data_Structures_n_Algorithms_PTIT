#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD=1000000007;
int n;

struct Matrix{
    ll x[100][100];
};

//typedef struct Matrix Matrix;

Matrix nhan(Matrix a, Matrix b) {
   Matrix c;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++) {
        c.x[i][j]=0;
        for(int h=0;h<n;h++) c.x[i][j] = (c.x[i][j] + (a.x[i][h]*b.x[h][j])%MOD ) % MOD;
    }
   }
   return c;
}

Matrix power(Matrix a, ll k) {
   if(k==1) return a;
   Matrix tmp=power(a,k/2);
   if(k%2) return nhan(a,nhan(tmp,tmp));
   return nhan(tmp,tmp);
}

void solve() {
  ll k;
  cin>>n>>k;
  Matrix a;
  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) cin>>a.x[i][j];
  }
  Matrix d = power(a,k);
  ll s=0;
  for(int i=0;i<n;i++) {
    s = ( s + d.x[i][n-1] ) % MOD;
  }
  cout<<s<<endl;
}

int main() {
  int t; cin>>t;
  while(t--) solve();
}
