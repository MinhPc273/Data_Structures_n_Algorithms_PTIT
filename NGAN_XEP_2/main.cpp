#include<bits/stdc++.h>
using namespace std;

string a[1000];

int main() {
   int t; cin>>t;
   cin.ignore();
   string s;
   int n=0;
   while(t--) {
    getline(cin,s);
    if(s=="POP"){
        if(n!=0) n--;
    }
    else if (s=="PRINT") {
        if(n==0){
            cout<<"NONE"<<endl;
        }else {
         cout<<a[n-1]<<endl;
        }
    }
    else{
        stringstream ss(s);
        string tmp;
        while(ss>>tmp) a[n]=tmp;
        n++;
    }
   }
}
