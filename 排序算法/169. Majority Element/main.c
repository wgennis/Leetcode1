int cmp(int *a,int *b)
{
    return *a-*b;
}
int majorityElement(int* nums, int numsSize){
    qsort(nums,numsSize,sizeof(int),cmp);
    int mid=numsSize/2;
    return nums[mid];
}
