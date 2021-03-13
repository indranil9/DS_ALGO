#include<bits/stdc++.h>
using namespace std;
const int si = 1e5+1;
vector<int>adj[si],v;
bool visited[si];
void dfs(int x){
	if(visited[x]) return;
	visited[x] = true;
	for(auto u:adj[x]){
		dfs(u);
	}
}
int main(){
	int n,m,a,b,count=0;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for(int i=1;i<=n;i++){
		visited[i] = false;
	}
	for(int i=1;i<=n;i++){
		if(visited[i]==false){
			v.push_back(i);
			dfs(i);
			count++;
		}
	}
	cout<<(count-1)<<"\n";
	for(int k=1;k<count;k++){
		cout<<v[0]<<" "<<v[k]<<"\n";
		
	}
	return 0;
}