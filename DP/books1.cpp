#include<bits/stdc++.h>
using namespace std;
int prices[1001];
int pages[1001];
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int x,n;
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		cin>>prices[i];
	}
	for(int i=1;i<=n;i++){
		cin>>pages[i];
	}
	int dp[n][x];
	dp[1][1] = 1;
	for(int i=n;i>=0;i--){
		for(int j=x;j>=0;j--){
			dp[i][j] = max(dp[i-1][j],pages[i]+dp[i-1][j-prices[i]]);
		}
	}
}