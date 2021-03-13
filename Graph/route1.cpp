#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int si = 1e5 + 1;
ll dis[si];
bool processed[si];
vector<pair<ll,ll>>adj[si];
ll n,m,k;
void dijstra(ll x){
	dis[x] = 0;
	priority_queue<pair<ll,ll>>q;
	q.push(make_pair(0,x));

	while(!q.empty()){
		ll a = q.top().second;
		q.pop();
		if(processed[a]) continue;
		processed[a] = true;
		for(auto e : adj[a]){
			ll v = e.first;
			ll u = e.second;
			if(dis[v]>dis[a]+u){
				dis[v] = dis[a] + u;
				q.push(make_pair(-dis[v],v));
			}
		}
	}
	
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif
	ll a,b,c;
	memset(dis,0x3F,sizeof(dis));
	cin>>n>>m>>k;
	for(int i=1;i<=m;i++){
		cin>>a>>b>>c;
		adj[a].push_back(make_pair(b,c));
	}
	dijstra(1);
	for(int i=1;i<=n;i++) cout<<dis[i]<<"\n";
	return 0;
}