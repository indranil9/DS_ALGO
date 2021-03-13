#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[1000][1000];
bool visited[1000][1000];
void dfs(int x,int y){
	if(x < 0 || x == n) return;
	if(y < 0 || y==m) return;
	if(a[x][y]=='#') return;
	if(visited[x][y]) return;
	visited[x][y] = true;
	dfs(x+1,y);
	dfs(x-1,y);
	dfs(x,y+1);
	dfs(x,y-1);
}
int main(){
	int count = 0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			visited[i][j] = false;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(visited[i][j]==false){
				if(a[i][j]=='.'){
					dfs(i,j);
					count++;
				}
			}
		}
	}
	cout<<count;
	return 0;
}