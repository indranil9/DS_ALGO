#include<bits/stdc++.h>
using namespace std;
#define INF 999999
vector<tuple<int,int,int>>edges;
int distance1[7];
void find(int x){
	for(int i=1;i<=6;i++) distance1[i] = INF;
	distance1[x]=0;
	for(int i=1;i<=5;i++){
		for(auto e : edges){
			int a,b,w;
			tie(a,b,w) = e;
			distance1[b] = min(distance1[b],distance1[a]+w);
		}
	}
	for(int i=1;i<=6;i++){
		cout<<distance1[i]<<"\t";
	}
}
int main(){
	edges.push_back(make_tuple(1,2,5));
	edges.push_back(make_tuple(1,4,7));
	edges.push_back(make_tuple(1,3,3));
	edges.push_back(make_tuple(2,1,5));
	edges.push_back(make_tuple(2,4,3));
	edges.push_back(make_tuple(2,6,2));
	edges.push_back(make_tuple(3,1,3));
	edges.push_back(make_tuple(3,4,1));
	edges.push_back(make_tuple(4,1,7));
	edges.push_back(make_tuple(4,3,1));
	edges.push_back(make_tuple(4,6,2));
	edges.push_back(make_tuple(4,2,3));
	edges.push_back(make_tuple(6,2,2));
	edges.push_back(make_tuple(6,4,2));
	find(1);
	return 0;
}