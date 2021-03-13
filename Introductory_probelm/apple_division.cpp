#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
vector<ll>v1;
vector<ll>v;
ll sum = 1e18;
ll sum1 = 0;
void test(){
	ll s1 = 0,s2 = 0;
	for(auto u:v){
		s1 = s1 + u;
	}
	s2 = sum1 - s1;
	ll diff = abs(s1 - s2);
	if(sum>diff) sum = diff;
}
void solve(ll x){
	if(x==n){
		test();
	}
	else{
		solve(x+1);
		v.push_back(v1[x]);
		solve(x+1);
		v.pop_back();
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	cin>>n;
	for(ll i = 0;i<n;i++){
		ll a;
		cin>>a;
		sum1 = sum1 + a;
		v1.push_back(a);
	}
	solve(0);
	cout<<sum;
	return 0;
}