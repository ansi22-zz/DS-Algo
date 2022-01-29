// ॐ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve(){
    
    int n,k;
    cin>>n>>k;
    if(k==1&&n!=k) {
    	cout<<-1<<"\n";
    	return;
    }
    for(int i=1;i<=n;i++){
    	if(i==k) cout<<n<<" ";
    	else if(i==n) cout<<k<<" ";
    	else cout<<i<<" ";
    }
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