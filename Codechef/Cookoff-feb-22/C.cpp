// असाध्य ते साध्य । करिता सायास । कारण अभ्यास 
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int
// int p[1000001];

void solve(){
   
   int n,k;
   cin>>n>>k;
   int a[k],p[n];
   map<int,int> mp;
   for(int i=0;i<k;i++){
   cin>>a[i];
   }
   if(n==k){
   	for(int i=0;i<n;i++)
   	cout<<a[i]<<" ";
   	cout<<"\n";
   	return;
   }
   	for(int i=0;i<n;i++)
	p[i]=i+1;
   reverse(p,p+a[0]);
   for(int i=1;i<k;i++)
   	reverse(p+a[i-1],p+a[i]);
   reverse(p+a[k-1],p+n);
   
   for(int i=0;i<n;i++) cout<<p[i]<<" ";
   cout<<"\n";
   
}

// void pre(){
// 	for(int i=0;i<1000001;i++)
// 	p[i]=i+1;
// }

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t=1;
    cin>>t;
    // pre();
    while(t--)
    solve();
    return 0;
}
