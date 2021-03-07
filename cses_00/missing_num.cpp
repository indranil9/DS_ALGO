#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	vector<int>v;
	ll n;
	cin>>n;
	for(ll j = 0;j<n;j++){
		ll a;
		cin>>a;
		v.push_back(a);
	}
	ll i;
	sort(v.begin(),v.end());
	for(i = 1;i<=n;i++){
		if(!binary_search(v.begin(),v.end(),i)) break;
	}
	cout<<i;
	return 0;
}