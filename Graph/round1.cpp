#include<bits/stdc++.h>
using namespace std;
int n,m;
const int si = 1e5 + 1;
vector<int>adj[si];
bool visited[si];
int parent[si];
void dfs(int x,int p){
	visited[x] = true;
	parent[x] = p;
	for(auto u:adj[x]){
		int v = parent[x];
		if(v==u) continue;
		if(visited[u]&&parent[x]!=u){
			vector<int>ans;
			ans.push_back(x);
			int v1=parent[x];
			while(v1!=u){
				ans.push_back(v1);
				v1=parent[v1];
			}
			ans.push_back(v1);
			ans.push_back(x);
			cout<<ans.size()<<"\n";
			for(auto i:ans){
				cout<<i<<" ";
			}
			exit(0);
		}
		dfs(u,x);
	}
}
int main(){
	//#ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	//#endif
	cin>>n>>m;
	int a,b;
	for(int i=1;i<=m;i++){
			cin>>a>>b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
	for (int i=1;i<=n;i++){
		if(!visited[i]){
			dfs(i,-1);
		}
	}
	cout<<"IMPOSSIBLE";
	return 0;
}