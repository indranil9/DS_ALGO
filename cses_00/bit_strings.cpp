#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 1e9 + 7;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n;
	cin>>n;
	ll r = pow(2,n);
	cout<<r % mod;
	return 0;
}