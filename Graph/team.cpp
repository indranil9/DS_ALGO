#include<bits/stdc++.h>
using namespace std;
int n,m;
const int si = 1e5 + 1;
vector<int>adj[si];
bool visited[si];
vector<int>team(si,-1);
void dfs(int x){
	if(visited[x]) return;
	visited[x] = true;
	if(team[x]== -1){
		int f = 0;
		for(auto v1 :adj[x]){
			if(team[v1]==1){
				team[x] = 2;
				f=1;
				break;
			}
			if(team[v1]==2){
				team[x] = 1;
				f=1;
				break;
			}
		}
		if(f==0) team[x] = 1;
		for(auto v:adj[x]){
			if(team[v]==team[x]){
				cout<<"IMPOSSIBLE";
				exit(0);
			}
		}
	}
	for(auto u: adj[x]){
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
		if(!visited[i]){
			team[i] = 1; 
			dfs(i);
		}
	}
	for(int k=1;k<=n;k++){
		cout<<team[k]<<" ";
	}
	return 0;
}
