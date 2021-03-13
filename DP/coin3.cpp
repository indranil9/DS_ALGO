#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int si = 1e6 + 1,mod = 1e9 + 7;
ll memo[si];
vector<ll>coins;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n,x,c;
	cin>>n>>x;
	for(int i = 1;i<=n;i++){
		cin>>c;
		coins.push_back(c);
	}
	memo[0] = 1;
	for(auto c:coins){
		for(int k=1;k<=x;k++){
			if((k-c)>=0){
				memo[k] = (memo[k] + memo[k-c])%mod;
			}
		}
	}
	cout<<memo[x];
	return 0;
	
}