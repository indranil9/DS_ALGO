#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	vector<ll>v;
	ll n;
	ll count = 0;
	cin>>n;
	for(ll i = 0;i<n;i++){
		ll a;
		cin>>a;
		v.push_back(a);
	}
	ll k = 0;
	for(ll i = 1;i<n;i++){
		if(v[k]<=v[i]){
			k = k + 1;
		}
		else{
			ll r = v[k] - v[i];
			count = count + r;
			v[i] = v[i] + r;
			k = k + 1;
		}
	}
	cout<<count;
	return 0;
}