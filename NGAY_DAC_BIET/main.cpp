#include<bits/stdc++.h>
using namespace std;

void sinh(){
    string day[3] = {"02", "20", "22"};
    string month="02";
    string year[8]={"2000","2002","2020","2022","2200","2202","2220","2222"};
    string res="";
    for(int i=0;i<3;i++){
        res+=day[i];
        res=res+"/"+month+"/";
        string t_res=res;
        for(int j=0;j<8;j++){
            res+=year[j];
            cout<<res<<"\n";
            res=t_res;
        }
        res="";
    }
}

void solve(){
   sinh();
}

int main(){
   solve();
}
