#include<bits/stdc++.h>
using namespace std;
vector<int>adj[6];
bool visited[6];
void dfs(int x){
	if(visited[x]) return;
	visited[x] = true;
	for(auto u:adj[x]){
		dfs(u);
	}
}
int main(){
	int count = 0;
	adj[1].push_back(2);
	adj[1].push_back(3);
	adj[2].push_back(1);
	adj[2].push_back(3);
	adj[3].push_back(1);
	adj[3].push_back(2);
	adj[4].push_back(5);
	adj[5].push_back(4);
	for(int i=1;i<=5;i++){
		visited[i]=false;
	}
	for(int i=1;i<=5;i++){
		if(visited[i]==false){
			count++;
			dfs(i);
		}
	}
	cout<<"The number of connected component is"<<count<<"\n";
	return 0;
}