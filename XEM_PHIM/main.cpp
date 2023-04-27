#include<bits/stdc++.h>
using namespace std;

int c,n;
int w[105];
int p,tmp;

void Try(int i) {
    for(int j=0;j<=1;j++) {
        if(tmp+w[i]*j<=c) {
            tmp+=w[i]*j;
            if(i==n) p=max(p,tmp);
            else Try(i+1);
            tmp-=w[i]*j;
        }
    }
}

int main() {
   cin>>c>>n;
   p=0,tmp=0;
   for(int i=1;i<=n;i++) cin>>w[i];
   Try(1);
   cout<<p<<endl;
}
