class Solution {
    public List<List<Integer>> combinationSum3(int k, int n) {
        List<List<Integer>> ans=new ArrayList<List<Integer>>();
        List<Integer> output=new ArrayList<Integer>();
        findcomb(ans,output,1,n,k);
        return ans;
    }
    public void findcomb(List<List<Integer>> ans,List<Integer> output,int pos,int n,int k)
    {
        if(n==0&&k==0)
        {
            ans.add(new ArrayList(output));
            return;
        }
        for(int i=pos;i<10;i++)
        {
            if(i*k>n){
            break;
        }
            output.add(i);
            findcomb(ans,output,pos+1,n-i,k-1);
            output.remove(output.size()-1);
            pos++;
        }
    }
}
