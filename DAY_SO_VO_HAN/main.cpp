#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD=1000000007;
int n=4;

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
  cin>>k;
  Matrix a;
  a.x[0][0]=a.x[1][0]=a.x[0][1]=1;
  a.x[1][1]=0;
  Matrix d = power(a,k-1);
  cout<<d.x[0][0]<<endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin>>t;
  while(t--) solve();
}
