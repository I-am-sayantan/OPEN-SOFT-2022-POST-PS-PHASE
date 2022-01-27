#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
using ll=long long;

void __read(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);  
	freopen("output.txt", "w", stdout);
	#endif
}

void solve(){
	vector<int> arr{ 10, 9, 7, 8, 2 };
	for(int i=0;i<arr.size();i++){
		for(int j=i+1;j<arr.size();j++){
			if(arr[i] > arr[j]){
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for(int x:arr){
		cout<<x<<" ";
	}
}

signed main(){
	fast;
	__read();

	// ll __t;cin>>__t;while(__t--)
	solve();
}
