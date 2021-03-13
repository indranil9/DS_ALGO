#include<bits/stdc++.h>
using namespace std;
#define ll long long
void tower_of_hanoi(ll n,ll a,ll b,ll c){
	if(n>0){
		tower_of_hanoi(n-1,a,c,b);
		cout<<a<<" "<<c<<"\n";
		tower_of_hanoi(n-1,b,a,c);
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n;
	cin>>n;
	cout<<pow(2,n)-1<<"\n";
	tower_of_hanoi(n,1,2,3);	
	return 0;
}