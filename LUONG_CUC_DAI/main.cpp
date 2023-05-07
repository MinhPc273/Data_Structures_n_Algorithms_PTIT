#include<bits/stdc++.h>
using namespace std;

int g[1005][1005],gf[1005][1005],s,t,v,f[1005][1005],vs[1005],e[1005],Val;
vector<int> x,y;

int BFS(int s,int t) {
    x.clear(); y.clear();
    for(int i=1;i<=v;i++){
        vs[i]=0;
        e[i]=0;
    }
    vs[s]=1;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        s=q.front();
        q.pop();
        for(int i=1;i<=v;i++){
            if(vs[i]==0 && gf[s][i]!=0){
                q.push(i);
                vs[i]=1;
                e[i]=s;
            }
        }
    }
    if(e[t]==0) return 0;
    while(1){
        //cout<<e[t]<<" "<<t<<endl;
        x.push_back(e[t]);
        y.push_back(t);
        t=e[t];
        if(e[t]==0) break;
    }
    return 1;
}

void Max_Flow(int s,int t) {
  for(int i=1;i<=v;i++){
    for(int j=1;j<=v;j++) f[i][j]=0;
  }
  int stop=0;
  while(!stop){
        if(BFS(s,t)) {
            int Min=INT_MAX;
            for(int i=0;i<x.size();i++){
                    //cout<<x[i]<<" "<<y[i]<<endl;
                int tmp_x=x[i],tmp_y=y[i];
                   Min=min(Min,abs(gf[tmp_x][tmp_y]));
            }
            //cout<<Min<<endl;
            for(int i=0;i<x.size();i++){
                int tmp_x=x[i],tmp_y=y[i];
                if(g[tmp_x][tmp_y]>0) {
                    f[tmp_x][tmp_y]+=Min;
                }
                else f[tmp_y][tmp_x]-=Min;
                gf[tmp_x][tmp_y]-=Min;
                gf[tmp_y][tmp_x]-=Min;
            }
            Val+=Min;

        }else stop=1;
  }
}

int  ghiFile(){
    ofstream OUT("DT.OUT ",ios::out);
    if (!OUT){
        cout<<"error: khong mo duoc file";
        return -1;
    }
    OUT<<Val<<endl;
    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++) OUT<<f[i][j]<<" ";
        OUT <<endl;
    }
    return 0;//ghi thanh cong
}

int  docFile(){
    ifstream INP("DT.INP", ios::in);
    if (!INP){
        cout<<"error: khong mo duoc file";
        return -1;
    }
    //bat dau doc file
    INP >> v;
    for (int i = 1;i <= v; i++ )
        for(int j=1;j<=v;j++) INP>>g[i][j];
    return 0;
}

int main(){
    cin>>v;
    s=1,t=v;
    Val=0;
    docFile();
    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++) {
    //        cin>>g[i][j];
            gf[i][j]=g[i][j];
        }
    }
    Max_Flow(s,t);
    cout<<Val<<endl;
    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++) cout<<f[i][j]<<" ";
        cout<<endl;
    }
    ghiFile();
}
