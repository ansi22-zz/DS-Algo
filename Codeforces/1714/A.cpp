#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<set>
#include<algorithm>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<bitset>
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<cstdlib>
#include<iomanip>


using namespace std;
#define int long long int

void solve(){
   int n,k;
   cin>>n>>k;
   int a[n],b[n],ans=0;

   for(int i=0;i<n;i++){
      cin>>a[i];
      b[i]=a[i];
   }
   sort(b,b+n);
   map<int,int> mp;
   for(int i=0;i<k;i++){
      mp[a[i]]++;
   }
   for(int i=0;i<k;i++){
      if(mp.find(b[i])==mp.end()) ans++;
   }
   cout<<ans<<"\n";
}

void pre(){
   
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
     for(int tc=1;tc<=t;tc++)
     solve();
     return 0;
}
