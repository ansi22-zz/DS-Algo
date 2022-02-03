#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

int mod=1e9+7;
int n,m,vis[100000];
vector<int> adj[100000];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

void dfs(vector<vector<char>>& mat,int i,int j){
   
   int n=mat.size(),m=mat[0].size();
   if(i<0||i>=n||j<0||j>=m||mat[i][j]=='#')
    return;
   mat[i][j]='#';
   for(int k=0;k<4;k++){
    int nx=i+dx[k];
    int ny=j+dy[k];
    dfs(mat,nx,ny);
   }
}

void solve(){
  cin>>n>>m;
  vector<vector<char>> mat(n,vector<char>(m,'0'));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
        cin>>mat[i][j];
  }
  int ans=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
        if(mat[i][j]=='.')
            dfs(mat,i,j),ans++;
  }
  cout<<ans<<"\n";
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