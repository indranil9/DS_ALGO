#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif
	int n;
	vector<vector<int>>adj;
	for(int i=1;i<=3;i++){
		vector<int>v;
		for(int j=1;j<=3;j++){
			cin>>n;
			v.push_back(n);
		}
		adj.push_back(v);
	}
	for (int i = 0; i < adj.size(); i++) { 
        for (int j = 0; j < adj[i].size(); j++) 
            cout << adj[i][j] << " "; 
        cout << endl; 
    } 
	return 0;
}