#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n, k;
	cin>>n>>k;
	vector<int> arr(n);
	for(int i = 0; i < k; i++) cin>>arr[i];
	int step = k;
	while(step > 0 && arr[step] - arr[step - 1] <= 1) step--;
	if(step == 0 && arr[0] == 1){
		int val = n - k + 1;
		for(int i = 0; i < k; i++) cout<<val++<<" ";
		return;
	}
	arr[step]--;
	int index = k - 1, tmp = n;
	for(int i = index; i >= step + 1; i--) arr[i] = tmp--;
	for(int i = 0; i < k; i++) cout<<arr[i]<<" ";
	cout<<endl;
}

int main(){
	int a; cin>>a;
	while(a--) {
		solve();
	}
	return 0;
}
