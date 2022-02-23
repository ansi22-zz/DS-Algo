// असाध्य ते साध्य । करिता सायास । कारण अभ्यास 
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int


void solve(){
   
   int n,k;
   cin>>n>>k;
   int p[n];
   for(int i=0;i<n;i++)
   p[i]=i+1;
   if(n==k){
   	for(int i=0;i<n;i++)
   	cout<<p[i]<<" ";
   	cout<<"\n";
   	return;
   }
   int tempo=n-k;
   for(int i=0;i<n-1&&tempo--;i++)
   	swap(p[i],p[i+1]);
   
   for(int i=0;i<n;i++)
   cout<<p[i]<<" ";
   cout<<"\n";
   
}


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
