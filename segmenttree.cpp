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

// const int mod=1e9+7;
// const int inf=2e18;
const int max_sz=4*1e5;
int a[max_sz],seg[max_sz];

// funtion to build segment tree
void build(int ind,int low,int high){
     // we are stopping when low=high
     if(low==high){
          seg[ind]=a[low];
          return;
     }
     int mid=(low+high)/2;
     build(2*ind,low,mid);
     build(2*ind+2,mid+1,high);
     seg[ind]=max(seg[2*ind+1],seg[2*ind+2]);
}

//query
int query(int ind,int low,int high,int l,int r){
     if(low>=l&&high<=r){
          return seg[ind];
     }
     if(high<l || low>r){
          return INT_MIN;
     }
     // overlaps condition
     int mid=(low+high)/2;
     int left=query(2*ind+1,low,mid,l,r);
     int right=query(2*ind+2,mid+1,high,l,r);
     return max(left,right);
}

void solve(){
     int n;
     cin>>n;
     
     for(int i=0;i<n;i++)
          cin>>a[i];
     // start building from root
     // build(root,startind,endind)
     build(0,0,n-1);
     int q;
     cin>>q;
     while(q--){
          int l,r;
          cin>>l>>r;
          cout<<query(0,0,n-1,l,r);
     }
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
