class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> ans=new HashSet<Integer>();
        int n=nums.length;
        for(int num:nums)
        {
            ans.add(num);
        }
        int num=0;
        for(Integer i:nums)
        {
            if(!ans.contains(i-1))
            {
                int l=0;
                while(ans.contains(i))
                {
                    l++;
                    i++;
                }
                num=Math.max(l,num);
            }
        }
        return num;

    }
}
