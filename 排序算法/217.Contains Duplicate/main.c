int cmp(int *a,int *b)
{
    return *a-*b;
}
bool containsDuplicate(int* nums, int numsSize){
    qsort(nums,numsSize,sizeof(int),cmp);
    int i;
    for(i=0;i<numsSize-1;i++)
    {
        if(nums[i]==nums[i+1])
        return true;
    }
    return false;
}
