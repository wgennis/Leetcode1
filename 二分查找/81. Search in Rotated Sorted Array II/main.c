bool search(int* nums, int numsSize, int target){
    int i=0,j=numsSize-1;
    int mid;
    while(i<=j)
    {
        mid=(i+j)/2;
        if(nums[mid]==target)
        return true;
        if(nums[i]==nums[j])
        i++;
        else
        {
            if(nums[mid]<=nums[j])
            {
                if(target>nums[mid]&&target<=nums[j])
                i=mid+1;
                else
                j=mid-1;
            }
            else
            {
                if(target>=nums[i]&&target<nums[mid])
                j=mid-1;
                else
                i=mid+1;
            }
        }
    }
    return false;
}
