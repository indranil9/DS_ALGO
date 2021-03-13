#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
const int si = 2501;
vector<tuple<ll,ll,ll>>edges;
ll dis[si];
bool vis[si],vis1[si];
vector<ll>adj[si];
void dfs2(int x){
	if(vis1[x]) return;
	vis1[x] = true;
	for(auto u:adj[x]){
		dfs2(u);
	}
}
void dfs(int x){
	if(vis[x]) return;
	vis[x] = true;
	for(auto u:adj[x]){
		dfs(u);
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif
	ll a,b,c;
	cin>>n>>m;
	memset(dis,0xc0,sizeof(dis));
	for(int i=1;i<=m;i++){
		cin>>a>>b>>c;
		edges.push_back(make_tuple(a,b,c));
		adj[b].push_back(a);
	}
	dfs(n);
	dis[1] = 0;
	for(int i=1;i<=n;i++){
		if(i==n){
			for(auto e:edges){
				ll a,b,c;
				tie(a,b,c) = e;
				ll m = dis[b];
				dis[b] = max(dis[b],dis[a]+c);
				if(m != dis[b]) {
					dfs2(b);
					cout<<(vis1[1]&&vis[b]?-1:dis[n]);
					exit(0);
				}
			}
		}
		else{
			for(auto e:edges){
				ll a,b,c;
				tie(a,b,c) = e;
				dis[b] = max(dis[b],dis[a]+c);
			}
		}
	}
	cout<<dis[n];
	return 0;
}