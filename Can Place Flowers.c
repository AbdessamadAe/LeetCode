bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n){
    
    int pos=0, i=0;

    if (flowerbedSize==1 && flowerbed[0]==0)
        {pos++;}
    else{

    if (flowerbedSize>1)
    {
        if (flowerbed[0]==0 && flowerbed[1]==0)
        {
            flowerbed[0]=1;
            pos++;
        }
        if (flowerbed[flowerbedSize-1]==0 && flowerbed[flowerbedSize-2]==0)
        {
            flowerbed[flowerbedSize-1]=1;
            pos++;
        }
    }

    while (i<flowerbedSize-2)
    {
        if (flowerbed[i] == 0 && flowerbed[i+1] == 0 && flowerbed[i+2]==0)
        {
            pos++;
            i+=2;
        }
        else
            i++;
    }
    }

    if (pos<n)
        return false;

    return true;
}