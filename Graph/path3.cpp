#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll m,n; 
const int si = 1e5 + 1;
vector<pair<ll,ll>>adj[si];
//bool processed[si];
//ll distance1[si];
void findmin(ll x,ll b){
	vector<bool>processed(si,false);
	vector<ll>distance1(si,LLONG_MAX);
	distance1[x] = 0;
	priority_queue<pair<ll,ll>>q;
	q.push(make_pair(0,x));
	while(!q.empty()){
		ll a = q.top().second;
		q.pop();
		if(processed[a]) continue;
		processed[a] = true;
		for(auto u : adj[a]){
			ll v = u.first;
			ll k = u.second;
			if(distance1[v]>distance1[a]+k){
				distance1[v] = distance1[a] + k;
				q.push(make_pair(-distance1[v],v));
			}
		}
	}
	if(distance1[b]==LLONG_MAX) cout<<-1<<"\n";
	else cout<<distance1[b]<<"\n"; 
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif
	ll a,b,c,q,a1,b1;
	cin>>n>>m>>q;
	for(int i=1;i<=m;i++){
		cin>>a>>b>>c;
		adj[a].push_back(make_pair(b,c));
		adj[b].push_back(make_pair(a,c));
	}
	for(int i=1;i<=q;i++){
		cin>>a1>>b1;
		findmin(a1,b1);
	}
	return 0;
}