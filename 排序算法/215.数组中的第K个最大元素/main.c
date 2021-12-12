int quicksort(int *a,int p,int r)
{
    int tmp;
    int i=p-1;
    int x=a[r];
    int j;
    for(j=p;j<r;j++)
    {
        if(a[j]<=x)
        {
            i=i+1;
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
        }
    }
    tmp=a[i+1];
    a[i+1]=a[r];
    a[r]=tmp;
    return i+1;
}
int findKthLargest(int *nums,int numsSize,int k){
    int target=numsSize-k;
    int privot;
    int p=0;
    int r=numsSize-1;
    while(p<r)
    {
        privot=quicksort(nums,p,r);
        if(privot==target)
        {
        return nums[privot];
        }
        if(privot>target)
        r=privot-1;
        else
        p=privot+1;
    }
    return nums[p];
    }



