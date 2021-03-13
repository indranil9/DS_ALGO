#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string s;
	cin>>s;
	map<char,ll>m;
	for(ll i = 0;i<s.size();i++){
		if(m.find(s[i])!=m.end()){
			ll p = m[s[i]];
			m.erase(s[i]);
			m.insert({s[i],p+1});
		}
		m.insert({s[i],1});
	}
	for(auto u : m){
		cout<<u.first<<" "<<u.second<<"\n";
	}
	return 0;
}