#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int si = 1e6 + 1;
ll mod = 1e9 + 7;
ll memo[si];
vector<ll>coins;
ll find(ll x){
	if(x<0){
		return 0;
	}
	else if(memo[x]){
		return memo[x];
	}
	else if(x==0){
		return 1;
	}
	else{
		ll sum = 0;
		for(auto c : coins){
			sum = sum + find(x-c);
		}
		memo[x]=sum % mod;
		return sum;
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
	cout<<memo[x];
	return 0;
	
}
