#include<bits/stdc++.h>
using namespace std;
int n,m;
const int si = 1e5 + 1;
vector<int>adj[si];
bool visited[si];
void dfs(int x){
	if(visited[x]) return;
	visited[x] = true;
	int k = 0,f=0,s;
	vector<int>ans;
	for(auto v1:adj[x]){
		if(visited[v1]) k+=1;
		if(k==2){
			f=1;
			s=x;
			break;
		}
	}
	if(f==1){
		ans.push_back(s);
		for(auto v2:adj[s]){
			if(visited[v2]) ans.push_back(v2);
		}
		cout<<ans.size()+1<<"\n";
		for(auto k:ans){
			cout<<k<<" ";
		}
		cout<<s<<" ";
		exit(0);
	}
	for(auto u:adj[x]){
		dfs(u);
	}
}
int main(){
	int a,b;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for(int i=1;i<=n;i++){
		if(!visited[i]) dfs(i);
	}
	cout<<"IMPOSSIBLE";
	return 0;
}