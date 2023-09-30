int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int singleNumber(int* nums, int numsSize){
    if(numsSize==1) return nums[0];
    qsort(nums, numsSize, sizeof(int), cmpfunc);
    if(nums[0]!=nums[1]) return nums[0];
    for(int i=0;i<numsSize-2;)
    {
        if (nums[i]!=nums[i+1]) return nums[i];
        i+=2;
    }
    return nums[numsSize-1];
}