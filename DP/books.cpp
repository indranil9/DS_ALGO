#include<bits/stdc++.h>
using namespace std;
int prices[1001];
int pages[1001];
int find(int c,int prices[],int pages[],int n){
	if(c==0||n==0){
		return 0;
	}
	else if(prices[n]>c){
		find(c,prices,pages,n-1);
	}
	else{
		int temp1 = find(c,prices,pages,n-1);
		int temp2 = pages[n] + find(c-prices[n],prices,pages,n-1);
		int result = max(temp1,temp2);
		return result;
	}
}
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
	int r = find(x,prices,pages,n);
	cout<<r;
}