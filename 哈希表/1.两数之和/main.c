class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer> ans=new HashMap<Integer,Integer>();
        int n=nums.length;
        for(int i=0;i<n;i++)
        {
            if(ans.containsKey(target-nums[i]))
            {
                return new int[]{ans.get(target-nums[i]),i};
            }
            ans.put(nums[i],i);
        }
        return new int[0];
    }
}
