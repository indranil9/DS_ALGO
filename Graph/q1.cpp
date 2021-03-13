#include<bits/stdc++.h>
using namespace std;
const int size = 1e5;
bool visited[size];
vector<int>adj[size];
void dfs(int x){
	if(visited[x]) return;
	visited[x] = true;
	for(auto u:adj[x]){
		dfs(u);
	}
}
int main(){
	int clib,croad,count,sum,m,n;
	//vector<vector<int>>cities(m);
	count=0;
		cin>>n>>m>>clib>>croad;
		int cities[m][2];
		for(int i=0;i<m;i++){
			for(int j=0;j<2;j++){
				cin>>cities[i][j];
			}
			
		}
    	queue<int>q;
    	for(int i=0;i<m;i++){
			for(int j=0;j<2;j++){
				q.push(cities[i][j]);
			}
			int r1=q.front();
			q.pop();
			int r2=q.front();
			q.pop();
			adj[r1].push_back(r2);
		}
		for(int i=1;i<=n;i++){
			visited[i]=false;
		}
		for(int i=1;i<=n;i++){
			if(visited[i]==false){
				count++;
				dfs(i);
			}
		}
		cout<<count;
		sum=0;
		sum = (n - count)*croad + count * clib;
		cout<<sum; 
	return 0;
}