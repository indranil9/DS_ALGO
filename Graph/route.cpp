#include<bits/stdc++.h>
using namespace std;
const int si = 1e5 + 1;
int n,m;
vector<int>adj[si];
int distance1[si];
bool visited[si];
void bfs(int x){
	distance1[x] = 0;
	visited[x] = true;
	queue<int>q;
	vector<int>pred(n+1);
	pred[x] = -1;
	q.push(x);
	while(!q.empty()){
		int r = q.front();
		q.pop();
		for(auto u: adj[r]){
			if(visited[u]) continue;
			distance1[u] = distance1[r] + 1;
			pred[u] = r;
			q.push(u);
			visited[u] = true;
		}
	}
	vector<int>path;
	if(!visited[n]){
		cout<<"IMPOSSIBLE";
	}
	else{
		cout<<distance1[n]+1<<"\n";
		for(int v=n;v!=-1;v=pred[v]){
			path.push_back(v);
		}
		reverse(path.begin(),path.end());
		for(auto u:path){
			cout<<u<<" ";
		}
	}
}
int main(){
	int a,b;
	cin>>n>>m;
	for(int i =0;i<m;i++){
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	bfs(1);
	return 0;
}