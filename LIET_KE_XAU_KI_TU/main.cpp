#include<bits/stdc++.h>
using namespace std;

char s;
int n,k;
char a[100];

void in() {
  for(int i=1;i<=k;i++) cout<<a[i];
  cout<<endl;
}

void Try(int i) {
    for(char j=a[i-1];j<=s;j++) {
        a[i]=j;
        if(i==k) in();
        else Try(i+1);
    }
}

void solve() {
    cin>>s>>k;
    a[0]='A';
    Try(1);
}

int main() {
    solve();
}
