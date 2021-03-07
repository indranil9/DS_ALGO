#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll t;
	cin>>t;
	while(t--){
		ll y,x;
		cin>>y>>x;
		if(y<x){
			if((x&1)==0){
				cout<<(x-1)*(x-1)+y<<"\n";
			}
			else{
				cout<<(x*x) - y + 1<<"\n";
			}
		}
		else{
			if((y&1)==1){
				cout<<(y-1)*(y-1) + x<<"\n";
			}
			else{
				cout<<(y*y) - x + 1<<"\n";
			}
		}
	}
	return 0;
}