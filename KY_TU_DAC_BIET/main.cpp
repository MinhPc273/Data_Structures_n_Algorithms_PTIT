#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k, x, a[62], pos = 61;
    string s;
    cin >> s >> k;
    n = s.size();
    s = ' ' + s;
    a[1] = n;
    //tim vi tri a[i]
    for (int i = 2; i <= 61; i++) {
        if (a[i - 1] * 2 >= 2e18) {
            pos = i - 1;
            break;
        }
        else a[i] = a[i - 1] * 2;
    }
    while (k > n) {
        if (a[pos] < k) {
            long long x = k - a[pos];
            if (x == 1)
                k = a[pos - 1];
            else
                k = x - 1;
        }
        pos--;
    }
    cout << s[k] << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}
