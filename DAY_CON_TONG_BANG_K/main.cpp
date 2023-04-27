#include<bits/stdc++.h>
using namespace std;

int check(int n,int a[],int b[],int s){
   for(int i=1;i<=n;i++){
       if(a[i]==0) s-=b[i];
   }
   if(s==0) return 1;
   return 0;
}

void in(int n,int a[],int b[],int s){
   vector<int> v;
   cout<<"[";
   for(int i=1;i<=n;i++){
       if(a[i]==0) v.push_back(b[i]);
   }
   for(int i=0;i<v.size();i++){
    if(i!=v.size()-1) cout<<v[i]<<" ";
    else cout<<v[i];
   }
   cout<<"] ";
}

void sinh_nhi_phan(int n,int a[],int b[],int s){
     for(int i=1;i<=n;i++) a[i]=0;
     int dem=0;
     while(1){
        int k;
        for(k=n;k>0;k--){
            if(a[k]==0) break;
        }
        if(k!=0){
            if(check(n,a,b,s)){
                 in(n,a,b,s);
                 dem++;
            }
            for(int i=k;i<=n;i++) a[i]=1-a[i];
        }
        else{
            if(check(n,a,b,s)){
                 in(n,a,b,s);
                 dem++;
            }
            break;
        }
     }
     if(dem==0) cout<<-1;
}

void solve(){
   int n,s; cin>>n>>s;
   set<int> se;
   for(int i=1;i<=n;i++){
    int x; cin>>x;
    se.insert(x);
   }
   n=se.size();
   int a[n+1],b[n+1];
   int j=1;
   for(auto i:se){
    b[j++]=i;
   }
   sinh_nhi_phan(n,a,b,s);
}

int main(){
   int t; cin>>t;
   while(t--){
    solve();
    cout<<endl;
   }
}
