#include<bits/stdc++.h>
using namespace std;

int min_insertion_steps(vector<int> A) {
    int n = A.size();
    vector<int> B(n, 1);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (A[j] <= A[i] && B[j]+1 > B[i]) {
                B[i] = B[j]+1;
            }
        }
    }
    int max_len = *max_element(B.begin(), B.end());
    return n - max_len;
}

void solve() {
    int n; cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        a.push_back(x);
    }
    cout<<min_insertion_steps(a)<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}
