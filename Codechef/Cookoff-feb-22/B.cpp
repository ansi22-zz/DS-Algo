// असाध्य ते साध्य । करिता सायास । कारण अभ्यास 
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve(){
   
  int n,w;
  cin>>n>>w;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  sort(a,a+n);
  int tempo=0,cnt=0;
  for(int i=n-1;i>=0;i--){
  	if(tempo>=w) break;
  	cnt++;
  	tempo+=a[i];
  }
  cout<<n-cnt<<"\n";
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
    while(t--)
    solve();
    return 0;
}