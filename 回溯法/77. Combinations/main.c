class Solution {
    public List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> ans=new ArrayList<List<Integer>>();
        List<Integer> output=new ArrayList<Integer>();
        int count=0;
        findcombine(ans,output,count,1,n,k);
        return ans;
    }
    public void findcombine(List<List<Integer>> ans,List<Integer> output,int count,int pos,int n,int k)
    {
        for(int i=k;i<output.size();i++)
        {
            output.remove(i);
        }
        if(count==k)
        {
            ans.add(new ArrayList<Integer>(output));
            return;
        }
        for(int i=pos;i<=n;i++)
        {
            output.add(count,i);
            count++;
            findcombine(ans,output,count,i+1,n,k);
            count--;
        }
    }
}
