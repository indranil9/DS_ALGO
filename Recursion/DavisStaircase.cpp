int stepPerms(int n) {
    if(n<0) return 0;
    if(memo[n]) return memo[n];
    if(n==0) return 1;
    int left = stepPerms(n-1); 
    int right = stepPerms(n-2);
    int middle = stepPerms(n-3);
    memo[n] = left + right + middle;
    return memo[n] % si;
}
