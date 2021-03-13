#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n,x;
	cin>>n>>x;
	priority_queue<ll,vector<ll>,greater<ll>>q;
	for(ll i = 0;i<n;i++){
		ll a;
		cin>>a;
		q.push(a);
	}
	ll sum = 0,count=0;
	ll v;
	while(!q.empty()){
		v = q.top();
		if(sum+v>x){
			sum = 0;
			count = count + 1;
		}
		sum = sum + v;
		q.pop();
	}
	cout<<count;
	return 0;
}