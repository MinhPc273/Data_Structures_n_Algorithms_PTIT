#include <bits/stdc++.h>
using namespace std;

int n, k, ans = 0;
int a[200], b[200];

void back_track(int pos1, int pos2)
{
    if (pos2 == k)
    {
        ans++;
        return;
    }
    for (int i = pos1 + 1; i < n; i++)
    {
        if (a[i] > a[pos1])
        {
            b[pos2 + 1] = a[i];
            back_track(i, pos2 + 1);
        }
    }
}

void solve(){
    cin>>n>>k;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        b[0] = a[i];
        back_track(i,1);
    }
    cout << ans;
}

int main()
{
    solve();
}
