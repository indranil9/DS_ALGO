#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string s,s1="";
	cin>>s;
	ll x;
	for(x = 0;x<s.size();x++){
		if(s[x]=='.'){
			x = x + 1;
			while(s[x]!='.'){
				x=x+1;
			}
			s1 = s1 + ".abc";
		}
		s1 = s1 + s[x];
	}
	cout<<s1;
	return 0;
}