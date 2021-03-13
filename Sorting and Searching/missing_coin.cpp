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
	vector<ll>v;
	for(ll i=0;i<n;i++){
		ll a;
		cin>>a;
		v.push_back(a);
	}
	reverse(v.begin(),v.end());
	ll count = 0,f;
	for(ll i = 0;i<v.size();i++){
		f = 0; 
		for(ll j = 0;j<v.size();j++){
		if(v[j]!=-1){
			if(lower_bound(v.begin(),v.end(),v[j])==v.end()){
				v[j] = - 1;
				f++;
			}
		}
		}
		if(f==0) break;
		count = count + 1;
	}
	if(count==0) cout<<v.size();
	else cout<<count;
	return 0;
}