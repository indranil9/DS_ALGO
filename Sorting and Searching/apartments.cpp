#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n,m,k,count=0;
	cin>>n>>m>>k;
	vector<ll>v1;
	vector<ll>v2;
	for(ll i = 0;i<n;i++){
		ll a;
		cin>>a;
		v1.push_back(a);
	}
	for(ll i = 0;i<m;i++){
		ll b;
		cin>>b;
		v2.push_back(b);
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	for(ll i =0,j =0;i<n;i++){
		while(j<m&&v2[j] < v1[i] - k)
			++j;
		if(j<m&&v2[j]<=v1[i]+k){
			++j;
			++count;
		}
	}
	cout<<count;
	return 0;
}