int search(int* nums, int numsSize, int target){
    int i=0,j=numsSize-1;
    int mid;
    while(j>=i)
    {
        mid=(i+j)/2;
        if(nums[mid]==target)
        return mid;
        if(nums[mid]>nums[j])
        {
            if(target<nums[mid]&&target>=nums[i])
            j=mid-1;
            else
            i=mid+1;
        }
        else
        {
            if(target>nums[mid]&&target<=nums[j])
            i=mid+1;
            else
            j=mid-1;
        }
    }
    return -1;
}
