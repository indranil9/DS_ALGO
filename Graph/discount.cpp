#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int si = 1e5 + 1;
vector<pair<ll,ll>>adj1[si],adj2[si];
ll dis1[si],dis2[si];
bool processed1[si],processed2[si];
void dijstra(int x,ll dis[],vector<pair<ll,ll>>adj[si],bool processed[]){
	priority_queue<pair<ll,ll>>q;
		dis[x] = 0;
		q.push(make_pair(0,x));
	    while(!q.empty()){
	    	ll b = q.top().second;
	    	q.pop();
	    	if(processed[b]) continue;
	    	processed[b] = true;
	    	for(auto u :adj[b]){
	    		ll x = u.first;
	    		ll y = u.second;
	    		if(dis[x]>dis[b]+y){
	    			dis[x] = dis[b] + y;  ;
	    			q.push(make_pair(-dis[x],x));
	    		}
	        }
	    }
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif
	ll a,b,c,n,m;
	memset(dis1,0x3F,sizeof(dis1));
	memset(dis2,0x3F,sizeof(dis2));
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a>>b>>c;
		adj1[a].push_back(make_pair(b,c));
		adj2[b].push_back(make_pair(a,c));
	}
	dijstra(1,dis1,adj1,processed1);
	dijstra(n,dis2,adj2,processed2);
	ll ans = 1e18;
	for(int i=1;i<=n;i++){
		for(auto u:adj1[i]){
			ans = min(ans,dis1[i]+dis2[u.first]+u.second/2);
		}
	}
	cout<<ans;
	return 0;
}