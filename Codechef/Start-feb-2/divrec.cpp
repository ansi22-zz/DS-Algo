// ॐ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve(){
   int n;
   string s;
   map<char,int> mp;
   cin>>n>>s;
   if(n%2!=0) {
   	cout<<"NO\n";
   	return;
   }
   sort(s.begin(),s.end());
   for(int i=0;i<n;i++)
   mp[s[i]]++;
   for(auto x: mp)
   if(x.second>n/2) {
   	cout<<"NO\n";
   	return;
   }
    cout<<"YES\n";
   for(int i=0;i<n/2;i++)
   cout<<s[i];
   for(int i=n-1;i>=n/2;i--)
   cout<<s[i];
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
    while(t--)
    solve();
    return 0;
}