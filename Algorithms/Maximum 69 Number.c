int maximum69Number (int num){
    int i=0, arr[10000000];
    while (num>9)
    {
        arr[i]=num%10;
        num/=10;
        i++;
    }
    arr[i]=num;
    num=0;
    for (int j=i;j>=0;j--)
    {
        if(arr[j]==6) {
            arr[j]=9;
            break;
        }
    }
    for(;i>=0;i--) num+=arr[i]*pow(10,i);
    return num;
}