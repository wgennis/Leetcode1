void sortColors(int* nums, int numsSize){
    int j,tmp;
    int p=0;
    int r=numsSize-1;
    int i=p-1;
    for(j=p;j<=r;j++)
    {
        if(nums[j]<2)
        {
            i++;
            tmp=nums[i];
            nums[i]=nums[j];
            nums[j]=tmp;
        }
    }
    int k=i;
    int l=p-1;
    for(j=p;j<=k;j++)
    {
        if(nums[j]<1)
        {
            l++;
            tmp=nums[l];
            nums[l]=nums[j];
            nums[j]=tmp;
        }
    }
}


