#include <bits/stdc++.h>
using namespace std;

#define int long long int

void solve() {
	int n, x;
	cin>>n>>x;
	
	if(n%x!=0) cout<<-1<<"\n";
	else {
		vector<int> a;
		a.push_back(x);
		for(int i=2;i<=n-1;i++) {
			if(i==x) a.push_back(n);
			else a.push_back(i);
		}
		a.push_back(1);
		int check=a[x-1];
		int ind=x-1;
		for(int i=x-1;i<n-1;i+=x) {
			if(check%a[i]==0) {
				swap(a[ind], a[i]);
				ind=i;
			}
		}
		
		for(auto x: a){
			cout<<x<<" ";
		}
		
		cout<<"\n";
	}
}

int32_t main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
	return 0;
}
