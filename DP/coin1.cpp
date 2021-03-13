#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 999999
const int si = 1e6 + 1;
ll memo[si];
vector<ll>coins;
ll find(ll x){
	if(x<0){
		return 1e18;
	}
	else if(memo[x]){
		return memo[x];
	}
	else if(x==0){
		return 0;
	}
	else{
		ll best = 1e18;
		for(auto c : coins){
			best = min(best,1 + find(x-c));
			memo[x] = best;
		}
		return best;
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n,x,c;
	cin>>n>>x;
	for(int i = 1;i<=n;i++){
		cin>>c;
		coins.push_back(c);
	}
	find(x);
	cout<<((memo[x]>=1e18)?-1:memo[x]);
}