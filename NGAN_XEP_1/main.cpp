#include<bits/stdc++.h>
using namespace std;

string a[1000];

int main() {
   string s;
   int n=0;
   while(getline(cin,s)) {
    if(s=="pop"){
        n--;
    }
    else if (s=="show") {
        if(n==0){
            cout<<"empty"<<endl;
        }else {
       for(int i=0;i<n;i++) cout<<a[i]<<" ";
       cout<<endl;
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
