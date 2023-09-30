int climbStairs(int n){
    int preprev = 1, prev = 1, r=1;
    for (int i=1; i<n;i++)
    {
        r = prev + preprev;
        preprev= prev;
        prev = r;
    }
    return r;
}