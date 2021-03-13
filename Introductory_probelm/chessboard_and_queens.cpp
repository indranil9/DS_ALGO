#include<bits/stdc++.h>
using namespace std;
//#define ll long long
int c = 0;
bool reserve[8][8];
bool col[8];
bool diag1[15];
bool diag2[15];
//int a[1] = {0};
void search(int x){
    if(x==8){
        //a[0] = a[0] + 1;
        c++;
        return;
    }
    else{
        for(int i = 0;i<8;i++){
            if(col[i]||diag1[x+i]||diag2[x - i + 7]||reserve[x][i]) continue;
            col[i]=diag1[x+i]=diag2[x - i + 7] = true;
            search(x+1);
            col[i]=diag1[x + i]=diag2[x - i + 7] = false;
        }
    }
}
int main(){
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    for(int i = 0;i<8;i++){
        for(int j = 0;j<8;j++){
            char c;
            cin>>c;
            if(c=='*') reserve[i][j] = 1;
            else reserve[i][j] = 0;
            
        }
    }
    search(0);
    cout<<c;
    return 0;
}