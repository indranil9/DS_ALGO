#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string s;
	cin>>s;
	int max = 0,count=1;
	char c;
	for(int i = 0;i<s.size();i++){
		if(s[i]==c){
			count = count + 1;
		}
		else{
			if(max<count) max = count;
			c = s[i];
			count = 1;
		}

	}
	if(max<count) max = count;
	cout<<max;
	return 0;
}