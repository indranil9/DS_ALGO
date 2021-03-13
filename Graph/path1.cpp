#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
const int si = 1e5 + 1;
vector<ll>distance1(si,LLONG_MAX);
bool processed[si];
vector<pair<ll,ll>>adj[si];
void findmin(){
	distance1[1] = 0;
	priority_queue<pair<ll,ll>>q;
	q.push(make_pair(0,1));
	while(!q.empty()){
		ll a = q.top().second;
		q.pop();
		if(processed[a]) continue;
		processed[a] = true;
		for(auto u:adj[a]){

			ll b = u.first;
			ll w = u.second;
			if(distance1[b]>distance1[a]+w){
				distance1[b] = distance1[a]+w;
				q.push(make_pair(-distance1[b],b));
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<distance1[i]<<" ";
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	cin>>n>>m;
	ll a,b,c;
	for(int i=1;i<=m;i++){
		cin>>a>>b>>c;
		adj[a].push_back(make_pair(b,c));
	}
	/*for(auto k:adj[1]){
		cout<<k.first<<k.second<<" ";
	}*/
	findmin();
	return 0;
}