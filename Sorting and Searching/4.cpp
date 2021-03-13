#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n;
	ll dp[1000];
	cin>>n;
	for(ll i = 0;i<n;i++){
		cin>>dp[i];
	}
	sort(dp,dp+n);
	cout<<"first max diff="<<dp[n-1] - dp[0]<<"\n";
	cout<<"second max diff="<<dp[n-1] - dp[1]<<"\n";
	
	return 0;
}