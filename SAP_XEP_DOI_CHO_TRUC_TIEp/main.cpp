#include<bits/stdc++.h>
using namespace std;

void in(int n, int a[]){
   for(int i=0;i<n;i++) cout<<a[i]<<" ";
   cout<<endl;
}

void solve(){
   int n; cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   int index=1;
   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
             swap(a[i],a[j]);
        }
    }
    cout<<"Buoc "<<index++<<": ";
             in(n,a);
   }
}

int main(){
   solve();
}
