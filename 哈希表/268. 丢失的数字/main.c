class Solution {
    public int missingNumber(int[] nums) {
        Set<Integer> ans=new HashSet<Integer>();
        int n=nums.length;
        for(int num:nums)
        {
            ans.add(num);
        }
        int i=0;
        while(i<=n)
        {
            if(ans.contains(i))
            {
                i++;
            }
            else
            {
                return i;
            }
        }
        return 0;

    }
}
