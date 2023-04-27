#include<bits/stdc++.h>
using namespace std;

int n,a[100],cot[100],d1[100],d2[100],cnt;


//xet tung hang i,cot j
// d1= cac duong cheo xuoi i-j+n
// d2= cac duong cheo nguoc i+j-1
// https://youtu.be/efpaZznImN4?t=3224

void back_track(int i){
   //duyet tat ca kha nang x[i] co the nhan duoc
   for(int j=1;j<=n;j++){

      //chuan bi gan x[i]=j -> hau nam o hang i cot j
      if(cot[j] && d1[i-j+n] && d2[i+j-1]) {
        a[i]=j;
        cot[j]=d1[i-j+n]=d2[i+j-1]=0;

        if(i==n) cnt++;
        else{
            back_track(i+1);
        }

        cot[j]=d1[i-j+n]=d2[i+j-1]=1;
      }
   }
}

void solve(){
   cin>>n;
   cnt=0;
   for(int i=0;i<100;i++) cot[i]=d1[i]=d2[i]=1;
   back_track(1);
   cout<<cnt<<endl;
}

int main(){
    int t; cin>>t;
    while(t--) solve();
}
