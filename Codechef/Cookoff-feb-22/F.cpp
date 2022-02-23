// असाध्य ते साध्य । करिता सायास । कारण अभ्यास 
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve(){
   
   int n,e;
   cin>>n>>e;
   
   int tot=n*(n-1);
   tot/=2;
   
   int mis_edge=tot-e;
   int s=0;
   for(int i=0;i<n;i++) {
   	int x;
   	cin>>x;
   	s+=x;
   }
   for(int i=0;i<e;i++){
   	 int w;
   	 cin>>w>>w;
   }
   int q;
   cin>>q;
   
   while(q--) {
   	char ch;
   	cin>>ch;
   	
   	if(ch=='+'){
   		int w;
   		cin>>w>>w;
   		e++;
   		mis_edge--;
   	}
   	else if(ch=='-'){
   		int w;
   		cin>>w>>w;
   		e--;
   		mis_edge++;
   	}
   	else{
   		cout<<s+e-mis_edge<<"\n";
   	}
   }
}


int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--)
    solve();
    return 0;
}
