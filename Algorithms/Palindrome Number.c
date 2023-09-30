bool isPalindrome(int x){
    int i=0, j=0, arr[10000000];
    if (x<0)
        return false;
    while (x>9)
    {
        arr[i]=x%10;
        x=(int)(x/10);
        i++;
    }
    arr[i]=x;
    while (j<=i)
    {
        if(arr[j]!=arr[i-j])
            return false;
        j++;
    }
    return true;
}