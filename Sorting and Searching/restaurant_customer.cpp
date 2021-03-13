#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n;
    cin>>n;
    vector<pair<int,bool>>v;
    for(ll i = 0;i<n;i++){
      ll x,y;
      cin>>x>>y;
      v.push_back({x,true});
      v.push_back({y,false});
    }
    sort(v.begin(),v.end());
    ll count = 0,maxx = 0;
    for(auto u : v){
      if(u.second==true){
        ++count;
        maxx = max(count,maxx);
      }
      else{
        --count;
      }
    }
    cout<<maxx;
return 0;
}