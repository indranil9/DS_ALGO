#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
ll n,m;
const int si = 1e5 + 1;
vector<int>adj[si];
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	cin>>n>>m;
	int a,b;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a>>b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
	}
	for(auto u:adj[2]){
		if(u==1) continue;
	}
	cout<<"Hi";
	return 0;
}