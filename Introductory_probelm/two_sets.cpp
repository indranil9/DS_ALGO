#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n;
	deque<ll>q;
	cin>>n;
	for(ll i=1;i<=n;i++){
		q.push_back(i);
	}
	if((n * (n + 1)) % 4 !=0){
		cout<<"NO";
	}
	else{
		unordered_set<ll>s;
		ll sum = (n * (n + 1))/4;
		ll x = q.back();
		if(sum%x==0){
			sum = sum - x;
			s.insert(x);
			q.pop_back();
			while(sum>0){
				ll x1 = q.front();
				ll x2 = q.back();
				sum = sum - x1 - x2;
				s.insert(x1);
				s.insert(x2);
				q.pop_back();
				q.pop_front();
			}
			cout<<"YES"<<"\n";
			cout<<s.size()<<"\n";
			for(auto it=s.begin();it!=s.end();it++){
				cout<<*it<<" ";
			}
			cout<<"\n";
			cout<<q.size()<<"\n";
			while(!q.empty()){
				ll x3 = q.front();
				cout<<x3<<" ";
				q.pop_front();
			}
		}
		else{
			while(sum>0){
				ll x1 = q.front();
				ll x2 = q.back();
				sum = sum - x1 - x2;
				s.insert(x1);
				s.insert(x2);
				q.pop_back();
				q.pop_front();
			}
			cout<<"YES"<<"\n";
			cout<<s.size()<<"\n";
			for(auto it=s.begin();it!=s.end();it++){
				cout<<*it<<" ";
			}
			cout<<"\n";
			cout<<q.size()<<"\n";
			while(!q.empty()){
				ll x3 = q.front();
				cout<<x3<<" ";
				q.pop_front();
			}
		}
	}
	return 0;
}