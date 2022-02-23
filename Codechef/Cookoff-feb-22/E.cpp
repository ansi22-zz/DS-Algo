// असाध्य ते साध्य । करिता सायास । कारण अभ्यास 
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int


void solve(){
   
  int n;
  cin>>n;
  string s;
  cin>>s;
  int p[n];
  for(int i=0;i<n;i++)
  p[i]=i;
  if(s[0]=='0'||s[1]=='0'||s[n]=='0'){
  	cout<<"NO\n";
  	return;
  }
  for(int i=1;i<n;i++)
  if(s[i]=='0') 
  swap(p[i],p[i-1]);
  cout<<"YES\n";
  for(int i=0;i<n;i++)
  cout<<p[i]<<" ";
  cout<<'\n';
   
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