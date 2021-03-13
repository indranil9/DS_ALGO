#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	map<ll,ll>m;
	ll n,x;
	cin>>n>>x;
	for(ll i = 0;i<n;i++){
		ll a;
		cin>>a;
		if(m.find(x-a)!=m.end()){
			cout<<m[x-a]<<" "<<i + 1;
			exit(0);
		}
		m[a] = i + 1;
	}
	cout<<"IMPOSSIBLE";
	return 0;
}