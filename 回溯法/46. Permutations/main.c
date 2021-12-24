class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> ans=new ArrayList<List<Integer>>();
        List<Integer> output=new ArrayList<Integer>();
        for(int num:nums){
            output.add(num);
        }
        int n=nums.length;
        black(output,ans,0,n);
        return ans;
    }
    public void black(List<Integer> output,List<List<Integer>> ans,int p,int n)
    {
        if(p==n)
        {
            ans.add(new ArrayList<Integer>(output)); 
        }
        for(int i=p;i<n;i++)
        {
            Collections.swap(output,p,i);
            black(output,ans,p+1,n);
            Collections.swap(output,p,i);
        }
    }
}
