#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int si = 1e6 + 1,siz=101,mod = 1e9 + 7;
ll memo[si];
ll coins[siz];
int main(){
	/*#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif*/
	ll n,x;
	cin>>n>>x;
	for(ll i = 1;i<=n;i++){
		cin>>coins[i];
	}
	memo[0] = 1;
	for(ll j=1;j<=n;j++){
		for(ll k=1;k<=x;k++){
			if(coins[j]<=k){
				memo[k] = (memo[k] + memo[k-coins[j]])%mod;
			}
		}
	}
	cout<<memo[x];
	
}
