int upgrade(int x)
{
    int res=0;
    while(x)
    {
        res += (x%10)*(x%10);
        x=(int)(x/10);
    }
    return res;
}

bool isHappy(int n){
    int x=n, y=n;
    while(1)
    {
        x = upgrade(x);
        y = upgrade(y);
        y = upgrade(y);
        if(y==1) return true;
        if (x==y) break;
    }
    return false;
}