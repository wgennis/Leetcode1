class Solution {
    public int rob(int[] nums) {
        int n=nums.length;
        int c1=0,c2=0,m=0;
        for(int i=0;i<n;i++)
        {
            m=Math.max(c2+nums[i],c1);
            c2=c1;
            c1=m;
        }
        return m;
    }
}
