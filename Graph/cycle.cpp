#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int si = 2501;
vector<tuple<ll,ll,ll>>edges;
ll dis[si];
ll pred[si];
ll n,m;
ll x; 
int main(){
	//#ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	//freopen("output1.txt","w",stdout);
	//#endif
	memset(dis,0x3F,sizeof(dis));
	ll a,b,c;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a>>b>>c;
		edges.push_back(make_tuple(a,b,c));
	}
	dis[1] = 0;
	pred[1] = -1;
	for(int i=1;i<=n;i++){
			x = -1;
			for(auto e:edges){
				ll a1,b1,c1;
				tie(a1,b1,c1) = e;
				if(dis[b1]>(dis[a1]+c1)){
					dis[b1] = dis[a1] + c1;
					pred[b1] = a1;
					x = b1;
				}
			}
	}
	if(x== -1) cout<<"NO";
	else{
		//for(int i=1;i<=n;i++) cout<<pred[i]<<" ";
		cout<<x<<" ";
		for(int i=1;i<=n;++i){
			cout<<x<<" ";
			x = pred[x];

		}
		
		cout<<x;
		vector<int> cycle;
        for (int v = x;; v = pred[v]) {
            cycle.push_back(v);
            if (v == x && cycle.size() > 1)
                break;
        }
        reverse(cycle.begin(), cycle.end());
        cout << "YES"<<"\n";
        for (int v : cycle)
            //cout << v << " ";
        cout << endl;
	}
	return 0;
}