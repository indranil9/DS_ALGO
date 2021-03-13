#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<char> v;
vector<string>v1;
bool chosen[8];
void permutation(string s){
	if(v.size()==s.size()){
		string s2(v.begin(),v.end());
		if(find(v1.begin(),v1.end(),s2)!=v1.end()) return;
		for(auto x:v){
			cout<<x;
		}
		cout<<"\n";
		v1.push_back(s2);
	}
	else{
		for(ll i = 0;i<s.size();i++){
			if(chosen[i]) continue;
			chosen[i] = true;
			v.push_back(s[i]);
			permutation(s);
			chosen[i] = false;
			v.pop_back();
		}
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	permutation(s);
	return 0;
}