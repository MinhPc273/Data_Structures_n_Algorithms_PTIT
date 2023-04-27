#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
    return a>b;
}

void solve() {
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n,cmp);
    long x1=a[0]*a[1]*a[2]; // duong duong duong
    long x2=a[0]*a[n-1]*a[n-2]; //duong am am
    long x3=a[n-1]*a[n-2]; // tat ca deu am
    cout<<max(x1,max(x2,x3))<<endl;
}

int main() {
   solve();
}
