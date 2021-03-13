#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int si = 2e5;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n;
	cin>>n;
	ll v[si];
	for(ll i = 0;i<n;i++){
		cin>>v[i];
	}
	sort(v,v+n);
	ll sum = 0;
		ll mid = n/2;
		for(ll i = 0;i<n;i++){
			sum = sum + abs(v[i]-v[mid]);
		}
	cout<<sum;
	return 0;
}