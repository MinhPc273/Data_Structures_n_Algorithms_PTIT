#include<bits/stdc++.h>
using namespace std;

void min_ab(string &a,string &b){
    for(int i=0;i<a.size();i++){
        if(a[i]=='6') a[i]='5';
    }
    for(int i=0;i<b.size();i++){
        if(b[i]=='6') b[i]='5';
    }
}

void max_ab(string &a,string &b) {
    for(int i=0;i<a.size();i++){
        if(a[i]=='5') a[i]='6';
    }
    for(int i=0;i<b.size();i++){
        if(b[i]=='5') b[i]='6';
    }
}

void solve(){
    string a,b;
    cin>>a>>b;
    min_ab(a,b);
    cout<<stoi(a)+stoi(b)<<" ";
    max_ab(a,b);
    cout<<stoi(a)+stoi(b)<<endl;
}

int main(){
    solve();
}
