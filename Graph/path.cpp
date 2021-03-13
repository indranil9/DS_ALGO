#include<bits/stdc++.h>
using namespace std;
#define INF 1e10
typedef long long ll;
const ll si = 1e5 + 5; 
vector<tuple<ll,ll,ll>>edges;
ll distance1[si];
ll m,n;
void mindistance(){
	distance1[1] = 0;
	for(ll i=1;i<n;i++){
		for(auto e:edges){
			ll a,b,c;
			tie(a,b,c) = e;
			distance1[b] = min(distance1[b],distance1[a]+c);
		}
	}
	for(ll i=1;i<=n;i++){
		cout<<distance1[i]<<" ";
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll a,b,c;
	cin>>n>>m;
	for(ll i=1;i<=m;i++){
		cin>>a>>b>>c;
		edges.push_back(make_tuple(a,b,c));
	}
	for(ll i=1;i<=n;i++){
		distance1[i] = INF;
	}
	cout<<"hi";
	mindistance();
	return 0;
}