#include<bits/stdc++.h>
using namespace std;

int n;
char s;
char vs[100];
char a[100];

int check() {
   for(int i=2;i<=n-1;i++) {
    if((a[i]=='A' || a[i]=='E') &&
       (a[i-1]!='A' && a[i-1]!='E') &&
       (a[i+1]!='A' && a[i+1]!='E')) return 0;
   }
   return 1;
}

void in() {
  for(int i=1;i<=n;i++) cout<<a[i];
   cout<<endl;
}

void Try(int i) {
     for(char j='A';j<=s;j++) {
        if(vs[j]) {
            vs[j]=0;
            a[i]=j;
            if(i==n && check()) in();
            else {
            Try(i+1);
            }
                 vs[j]=1;
        }
     }
}

void solve() {
    cin>>s;
    n=s-'A'+1;
    for(char i='A';i<=s;i++) vs[i]=1;
    Try(1);
}

int main() {
  solve();
}
