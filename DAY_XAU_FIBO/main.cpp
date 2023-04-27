#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll f[95];

void fibo() {
    f[0]=0;
    f[1]=1;
    int i=2;
    while(i<93){
        f[i]=f[i-1]+f[i-2];
        i++;
    }
}

void solve() {
   fibo();
   ll n,k; cin>>n>>k;
    while (1)
        {
            if (n == 1)
            {
                cout << "A\n";
                break;
            }
            else if (n == 2)
            {
                cout << "B\n";
                break;
            }
            if (k > f[n - 2])
            {
                k -= f[n - 2];
                n--;
            }
            else
                n -= 2;
        }
    }


int main() {
   int t; cin>>t;
   while(t--) solve();
}
