#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int si = 1e6 + 1;
ll memo[si];
ll find(ll x){
	if(memo[x]){
		return memo[x];
	}
	else{
		ll best = 1e18;
		string s = to_string(x);
		for(int i=0;i<s.size();i++){
				if(((ll)s[i]-48)!=0){
				best = min(best,1+find(x-((ll)s[i]-48)));
				memo[x] = best;
			}
		}
		return best;
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n;
	cin>>n;
	for(int i = 0;i<=9;i++){
		memo[i] = 1;
	}
	find(n);
	cout<<memo[n];
}