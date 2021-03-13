#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
char arr[1000][1000];
int dp[1000][1000];
int n;
int find(int i,int j){
	if(i==n||j==n){
		return 0;
	}
	else if(dp[i][j]){
		return dp[i][j];
	}
	else if(arr[i][j]=='*'){
		dp[i][j] = 0;
		return 0;
	}
	else if(i==(n-1)&&j==(n-1)){
		dp[i][j] = 1;
		return 1;
	}
	else{
		int f = (find(i+1,j) + find(i,j+1))%mod;
		dp[i][j] = f;
		return f;
	}	
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	find(0,0);
	cout<<dp[0][0];
}