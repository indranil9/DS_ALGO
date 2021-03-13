#include<bits/stdc++.h>
using namespace std;
vector<int> adj[6];
bool visited[6];
void dfs(int s){
	if(visited[s]) return;
	visited[s]=true;
	cout<<s<<"\t";
	for(auto x : adj[s]){
		dfs(x);
	}
}
int main(){
	adj[1].push_back(2);
	adj[1].push_back(4);
	adj[2].push_back(1);
	adj[2].push_back(5);
	adj[2].push_back(3);
	adj[3].push_back(2);
	adj[3].push_back(5);
	adj[4].push_back(1);
	adj[5].push_back(2);
	adj[5].push_back(3);
	for(int i=1;i<=5;i++){
		visited[i]=false;
	}
	cout<<"The dfs of the graph is"<<"\n";
	dfs(1);
	return 0;
}