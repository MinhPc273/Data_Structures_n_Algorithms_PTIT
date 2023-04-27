#include<bits/stdc++.h>
using namespace std;

int arr[1005];
int cnt;

int countZeros( int left, int right) {
    // Kiểm tra điều kiện dừng đệ quy
    if (left > right) {
        return 0;
    }
    if (left == right) {
        if(arr[left]==0) return 1;
        else return 0;
    }
    // Chia mảng thành hai mảng con
    int mid = (left + right) / 2;
    int countLeft = countZeros( left, mid);
    int countRight = countZeros( mid+1, right);
    // Tổng hợp số lượng số 0 từ hai lần đệ quy
    int cnt = countLeft + countRight;
    return cnt;
}

void solve() {
    int n; cin>>n;
    cnt=0;
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<countZeros(0,n-1)<<endl;
}

int main() {
  int t; cin>>t;
  while(t--) solve();
}
