#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n;
	cin>>n;
	for(ll i = 0;i<n;i++){
		ll a;
		cin>>a;
		if(a % 5==4) cout<<a<<" ";
	}
	return 0;
}