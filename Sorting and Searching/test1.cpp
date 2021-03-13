#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	vector<int>v = {5,1,2,4,3};
	if(lower_bound(v.begin(),v.end(),5)==v.end()){
		cout<<"hello"<<"\n";
	} 
	else{
		cout<<"girl"<<"\n";
	}
	//cout<<"hello";
	return 0;
}