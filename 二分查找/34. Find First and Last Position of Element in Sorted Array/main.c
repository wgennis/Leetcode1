int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    int *ans=malloc(2*sizeof(int));
    *returnSize=2;
    int i=0,j=numsSize-1;
    int mid,k,r1,r2;
    while(i<=j)
    {
        mid=(i+j)/2;
        if(nums[mid]==target)
        {
            r1=mid;
            r2=mid;
            for(k=mid+1;k<=j;k++)
            {
                if(nums[k]==target)
                r2=k;
                else
                break;
            }
            for(k=mid-1;k>=i;k--)
            {
                if(nums[k]==target)
                r1=k;
                else
                break;
            }
            ans[0]=r1;
            ans[1]=r2;
            return ans;
        }
        else if(nums[mid]>target)
        j=mid-1;
        else if(nums[mid]<target)
        i=mid+1;
    }
    ans[0]=-1;
    ans[1]=-1;
    return ans;
}
