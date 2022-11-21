#include <bits/stdc++.h>
using namespace std;

#define int long long int

void solve() {
	int n, cnt=0;
	cin>>n;
	int b[n];
	set<int> st;
	vector<int> a;
	
	for(int i=0;i<n;i++) {
		cin>>b[i];
	}
	
	a.push_back(b[0]);
	
	for(int i=1;i<n;i++) {
		if(b[i]==b[i-1]) continue;
		a.push_back(b[i]);
	}
	
	// for(auto x: a) cout<<x<<" ";
	
	n=a.size();
	
	if(n==1) {
		cout<<"YES\n";
		return;
	}
	
	if(a[0]<a[1]) cnt++;
	if(a[n-1]<a[n-2]) cnt++;
	
	for(int i=1;i<n-1;i++) {
		if(a[i-1]>a[i]&&a[i]<a[i+1]) cnt++;
	}
	
	cout<<(cnt==1?"YES":"NO")<<"\n";
	
}

int32_t main() {
	int t=1;
	cin>>t;
	while(t--) {
		solve();
	}
	return 0;
}
