class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> ans=new ArrayList<List<Integer>>();
        List<Integer> output=new ArrayList<Integer>();
        int n=candidates.length;
        findcombin(ans,output,candidates,0,n,target);
        return ans;
    }
    public void findcombin(List<List<Integer>> ans,List<Integer> output,int[] candidates,int pos,int n,int target)
    {
        if(pos==candidates.length)
        {
            return;
        }
        if(target==0)
        {
            ans.add(new ArrayList<Integer>(output));
            return;
        }
        findcombin(ans,output,candidates,pos+1,n,target);
            if(target-candidates[pos]>=0)
            {
                output.add(candidates[pos]);
                findcombin(ans,output,candidates,pos,n,target-candidates[pos]);
                output.remove(output.size()-1);
            }
    }
}

