#include<bits/stdc++.h>
using namespace std;

void in(int n,int a[]){
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}

void solve(){
    int n; cin>>n;
    int a[n],b[n];
    int index=0;
    vector<int> v[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
      b[i]=a[i];
      for(int j=0;j<=i;j++)
      {
          if(b[j]>a[i])
          {
              for(int k=i;k>=j;k--) b[k+1]=b[k];
              b[j]=a[i];
              break;
          }
      }
       for(int j=0;j<=i;j++) v[index].push_back(b[j]);
       index++;
    }
    for(int i=index-1;i>=0;i--){
        cout<<"Buoc "<<i<<": ";
        for(auto j:v[i]) cout<<j<<" ";
        cout<<endl;
    }
}

int main(){
   solve();
}
