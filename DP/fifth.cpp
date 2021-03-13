#include<bits/stdc++.h>
using namespace std;
string longest_palindrome(string s){
	if(s.size()%2!=0){
		int max=0;
		string s4="";
		for(int i=1;i<s.size()-1;i++){
			int k=1;
			string s3="";
			while(s[i+k]==s[i-k]){
				k=k+1;
				s3=s[i+k]+s+s[i-k];
				cout<<"hi";
				if((i-k)<0||(i+k)==s.size()){
					break;
				}
			}
			k=k-1;
			if(max<k){
				max=k;
				s4=s3;
			}
		}
		return s4;
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string s = longest_palindrome("bab");
	cout<<s;

}