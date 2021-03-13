#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll binary_search(ll l,ll u,ll dp[],ll n){
	ll f = 0;
	while(l<=u){
		ll mid = (l+u)/2;
		if(dp[mid]==n){
			f=1;
			break;
		}
		else if(dp[mid]<n){
			l = mid + 1;
		}
		else{
			u = mid - 1;
		}
	}
	if(f==1) return 1;
	else return 0;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n;
	cin>>n;
	ll dp[1000],sum = 0;
	dp[0] = 0;
	dp[1] = 1;
	for(int i = 2;i<=n;i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	if(binary_search(0,n,dp,n)==1){
		cout<<n;
	}
	else{
		ll k = 0;
		while(k<n){
			if(dp[k]<n&&dp[k]%2==0){
				sum = sum + dp[k];
			}
			k = k + 1;
		}
		cout<<sum;
	}
	return 0;
}