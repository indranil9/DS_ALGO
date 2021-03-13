#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string s;
	getline(cin,s);
	ll k = s.size();
	ll x;
	for(ll i = 0;i<s.size();i++){
		if(s[i]==' '){
			x = k;
			
			while(x!=i+1){
				s[x] = s[x-1];
				x--;
			}
			s[i] = '%';
			s[i+1] = '?';
			i = i + 1;
			k = k + 1; 
			continue;
		}
	}
	for(ll i = 0;i<k;i++){
		cout<<s[i];
	}
	return 0;
}