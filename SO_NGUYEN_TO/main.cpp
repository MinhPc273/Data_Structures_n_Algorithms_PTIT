#include<bits/stdc++.h>
using namespace std;

int n,p,s;
vector<int> check(205,1);
vector<int> snt;
vector<vector<int>> ans;
vector<int> x;
int ma;

void sang() {
    check[0]=check[1]=0;
    for(int i=2;i<=200;i++) {
         if(check[i]) {
            snt.push_back(i);
            for(int j=i*i;j<=200;j+=i) check[j]=0;
         }
    }
}

void Try(int pos, int k, int ss)
{
    for (int i = pos + 1; i <= ma; i++)
    {
        if (ss + snt[i] == s && k == n - 1)
        {
            x.push_back(snt[i]);
            ans.push_back(x);
            x.pop_back();
        }
        else if (k < n - 1 && ss + snt[i] < s)
        {
            x.push_back(snt[i]);
            Try(i, k + 1, ss + snt[i]);
            x.pop_back();
        }
    }
}

void solve() {
   cin>>n>>p>>s;
   int pos=upper_bound(snt.begin(),snt.end(),p)-snt.begin(); // index > p
   ma=lower_bound(snt.begin(),snt.end(),s)-snt.begin(); // index >= s
   ans.clear();
   Try(pos-1, 0, 0);
   cout << ans.size() << endl;
   for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
            cout << endl;
        }
}

int main() {
    sang();
   int t; cin>>t;
   while(t--) solve();
}
