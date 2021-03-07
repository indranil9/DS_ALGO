#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fact(ll x){
	ll s = 1;
	for(ll i = x;i>0;i--){
		s = s * i;
	}
	return s;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	unordered_set<char>s1;
	string s;
	cin>>s;
	map<char,ll>m;
	for(auto x : s){
		if(m.find(x)!=m.end()) {
			ll p = m[x];
			m.erase(x);
			m.insert({x,p+1});
		}
		s1.insert(x);
		m.insert({x,1});
	}
	ll sum = 1;
	for(auto u : m){
		if(u.second>1){
			sum = sum * fact(u.second);
		}
	}
	if(s1.size()==1){
		cout<<1<<"\n";
	}
	else if(s1.size()==s.size()){
		cout<<fact(s.size())<<"\n";
	}
	else{
		cout<<fact(s.size())/sum<<"\n";
	}
	sort(s.begin(),s.end());
	do{
		cout<<s<<"\n";
	}while(next_permutation(s.begin(),s.end()));
	return 0;
}