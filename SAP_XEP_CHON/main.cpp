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
        int m=a[i],k=i;
    for(int j=i+1;j<n;j++){
        if(m>a[j]){
            m=a[j];
            k=j;
        }
    }
    swap(a[k],a[i]);
    cout<<"Buoc "<<index++<<": ";
             in(n,a);
   }
}

int main(){
   solve();
}
