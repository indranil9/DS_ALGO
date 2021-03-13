#include<bits/stdc++.h>
using namespace std;
vector<int>adj[7];
bool visited[7];
int distance1[7];
queue<int>q;
void bfs(int x){
	visited[x]=true;
	distance1[x] = 0;
    q.push(x);
    while(!q.empty()){
    	int s = q.front();
    	cout<<s<<"\t";
    	q.pop();
    	for(auto u : adj[s]){
    		if(visited[u]) continue;
    		visited[u] = true;
    		q.push(u);
    		distance1[u]=distance1[s]+1;
    	}
    }
}
int main(){
	adj[1].push_back(2);
	adj[1].push_back(4);
	adj[2].push_back(1);
	adj[2].push_back(5);
	adj[2].push_back(3);
	adj[3].push_back(2);
	adj[3].push_back(6);
	adj[4].push_back(1);
	adj[5].push_back(2);
	adj[5].push_back(6);
	adj[6].push_back(3);
	adj[6].push_back(5);
	for(int i=1;i<=6;i++){
		visited[i]=false;
	}
	cout<<"The bfs of the graph is"<<"\n";
	bfs(1);
	return 0;
}