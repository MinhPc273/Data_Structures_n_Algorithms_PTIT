#include<bits/stdc++.h>
using namespace std;

int x;
int n;
int a[100005];

int fid(int l,int r) {
    //dk dung
  if(l>r) return 0;
  int mid=(l+r)/2;
  if(a[mid]==x) return mid;
  if(a[mid]>x) return fid(l,mid-1);
  return fid(mid+1,r);
}

void solve() {
   cin>>n;
   cin>>x;
   for(int i=0;i<n;i++) cin>>a[i];
   int ans=fid(0,n-1);
   if(ans) cout<<ans+1<<endl;
   else cout<<"NO"<<endl;
}

int main() {
   int t; cin>>t;
   while(t--)
      solve();
}
