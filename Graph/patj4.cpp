#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
const int si = 501;
ll adj[si][si];
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif
	ll a,b,c,q,a1,b1;
	cin>>n>>m>>q;
	memset(adj,0x3F,sizeof(adj));
	for(int i=1;i<=m;i++){
		cin>>a>>b>>c;
		adj[a][b] = min(adj[a][b],c);
		adj[b][a] = min(adj[b][a],c);
	}
	for(int i=1;i<=n;i++) adj[i][i] = 0;
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				adj[i][j] = min(adj[i][j],adj[k][j]+adj[i][k]);
			}
		}
	}
	for(int i=1;i<=q;i++){
		cin>>a1>>b1;
		cout<<(adj[a1][b1]>=1e18?-1:adj[a1][b1])<<"\n";
	
	}
	return 0;
}