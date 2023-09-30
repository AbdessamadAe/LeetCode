int removeElement(int* nums, int numsSize, int val){
    for (int i=0; i<numsSize; )
    {
        if (nums[i]==val)
        {
            nums[i]=nums[numsSize-1];
            numsSize--;
        }
        else i++;
    }
    return numsSize;
}