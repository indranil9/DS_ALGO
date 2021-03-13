#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
char arr[1000][1000];
int dp[1000][1000];
int n;
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
	for(int i=n-1;i>=0;i--){
		for(int j=n-1;j>=0;j--){
			if(arr[i][j]=='*'){
				dp[i][j] = 0;
			}
			else if(i==n-1&&j==n-1){
				dp[i][j] = 1;
			}
			else{
				int f1 = (((i+1)==n) ? 0 : dp[i+1][j]);
				int f2 = (((j+1)==n) ? 0 :  dp[i][j+1]);
				dp[i][j] = (f1+f2)%mod;
			}
		}
	}
	cout<<dp[0][0];
}