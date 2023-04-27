#include<bits/stdc++.h>
using namespace std;

//8=1 // 6=0

void output(int n,int a[]){
     for(int i=1;i<=n;i++){
        if(a[i]==1) cout<<8;
        else cout<<6;
     }
     cout<<endl;
}

int check(int n, int a[]){
    if(a[1]==0) return 0;
    if(a[n]==1) return 0;
    for(int i=1;i<=n-1;i++){
        if(a[i]==1 && a[i+1]==1) return 0;
    }
    for(int i=1;i<=n-3;i++){
        if(a[i]==0 && a[i+1]==0 && a[i+2]==0 && a[i+3]==0) return 0;
    }
    return 1;
}

void sinh(int n,int a[]){
   for(int i=1;i<=n;i++) a[i]=0;
   while(1){
    int k;
    for(k=n;k>0;k--){
      if(a[k]==0) break;
    }
    if(k!=0){
            if(check(n,a)) output(n,a);
            for(int i=k;i<=n;i++) a[i]=1-a[i];
    }
    else{
              if(check(n,a)) output(n,a);
        return;
    }
   }
}


void solve(){
   int n; cin>>n;
   int a[n+1];
   sinh(n,a);
}

int main(){
   solve();
}
