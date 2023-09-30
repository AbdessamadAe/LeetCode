int min(int a, int b)
{
    return (a<b)?a:b;
}
int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration){
    int total=0, i=0;
    while(i<timeSeriesSize-1)
    {
        total += min(duration, timeSeries[i+1]-timeSeries[i]);
        i++;
    }
    total+=duration;
    return total;
}