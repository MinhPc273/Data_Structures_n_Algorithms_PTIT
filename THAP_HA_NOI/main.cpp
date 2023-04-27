#include<bits/stdc++.h>
using namespace std;

void Try(int n, char a, char b,char c) {
   if(n==1) { //neu chi con 1 dia chuyen tu A->C
       cout<<a<<" -> "<<c<<endl;
   }else {
        Try(n-1,a,c,b); //chuyen n-1 dia tu a->b
        Try(1,a,b,c);   // chuyen dia con lai sang c
        Try(n-1,b,a,c); // chuyen not n-1 dia tu b sang c
   }
}

void solve() {
   char a='A',b='B',c='C';
   int n; cin>>n;
   Try(n,a,b,c);
}

int main() {
    solve();
}
