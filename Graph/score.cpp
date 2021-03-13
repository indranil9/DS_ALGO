#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
const int si = 2501;
ll adj[si][si];
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif
	ll a,b,c;
	cin>>n>>m;
	memset(adj,0xc0,sizeof(adj));
	for(int i=1;i<=m;i++){
		cin>>a>>b>>c;
		adj[a][b] = max(adj[a][b],c);
	}
	for(int i=1;i<=n;i++) adj[i][i] = 0;
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				adj[i][j] = max(adj[i][j],adj[k][j]+adj[i][k]);
			}
		}
		
	}
	cout<<adj[1][n];
	return 0;
}