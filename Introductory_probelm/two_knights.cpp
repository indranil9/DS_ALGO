#include<bits/stdc++.h>
using namespace std;
int a[10000][10000];
int c = 0;
void search(int i,int k){
	if(i==k){
		c++;
		cout<<"hello";
		return;
	}
	for(int j = 0;j<k;j++){
		if(a[i-2][j+1]||a[i-2][j-1]||a[i+2][j+1]||a[i+2][j-1]||a[i-1][j+2]||a[i+1][j+2]||a[i-1][j-2]||a[i+1][j-2]) continue;
		a[i-2][j+1]=a[i-2][j-1]=a[i+2][j+1]=a[i+2][j-1]=a[i-1][j+2]=a[i+1][j+2]=a[i-1][j-2]=a[i+1][j-2] = 1;
		search(i+1,k);
		a[i-2][j+1]=a[i-2][j-1]=a[i+2][j+1]=a[i+2][j-1]=a[i-1][j+2]=a[i+1][j+2]=a[i-1][j-2]=a[i+1][j-2] = 0;
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		c = 0;
		search(0,i);
		cout<<c<<"\n";
	}
	return 0;
}