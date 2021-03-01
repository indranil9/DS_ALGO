ll find(ll x){
    if(x<10) return x;
    else{
        ll s = 0;
        while(x>0){
            ll r = x%10;
             s = s + r;
             x = x / 10;
        }
        return find(s);
    }
}
int superDigit(string n, int k) {
    ll sum = 0;
    for(ll i=0;i<n.size();i++){
        sum = sum + (int)n[i] - 48;
    }
    ll r = find(sum*k);
    return r;
}