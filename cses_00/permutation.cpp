#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n,f=0;
	cin>>n;
	vector<int>odd;
	vector<int>even;
	for(ll i= 1;i<=n;i++){
		if(n==2||n==3) {
			f=1;
			break;
		}
		if(i%2==0){
			even.push_back(i);
		}
		else{
			odd.push_back(i);
		}
	}
	if(f==0){
		even.insert(even.end(),odd.begin(),odd.end());
		for(auto x : even){
			cout<<x<<" ";
		}
	}
	else cout<<"NO SOLUTION";
}