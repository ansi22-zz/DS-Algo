// ॐ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve(){
    
    int x,y;
    cin>>x>>y;
    if(x==0&&y==0) {cout<<0<<"\n";return;}
    if(x==y) cout<<(2*x)-1<<"\n";
    else if(y==0) cout<<x<<"\n";
    else cout<<x+y<<"\n";
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