#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int si = 1e6 + 1;
ll mod = 1e9 + 7;
ll memo[si];
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
		 ll f = find(x-1)+find(x-2)+find(x-3)+find(x-4)+find(x-5)+find(x-6);
		 memo[x] = (f%mod);
		 return f;
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n;
	cin>>n;
	memset(memo,0,sizeof(memo));
	find(n);
	cout<<(memo[n]%mod);
	return 0;
}