int buyChoco(int* prices, int pricesSize, int money){
    int min=prices[0]+prices[1], i=0, t, j;
    while (i<pricesSize)
    {
        j=i+1;
        while(j<pricesSize)
        {
            t = prices[i]+prices[j];
            if (min>t) min=t;
            j++;
        }
        i++;
    }
    return (min<=money) ? money-min : money;
}