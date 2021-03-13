#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n;
	cin>>n;
	while(1){
		cout<<n<<" ";
		if(n==1) break;
		if(n%2==0){
			n = n / 2;
		}
		else{
			n = (n * 3) + 1;
		}
	}
	return 0;
}