class Solution {
    public int lengthOfLongestSubstring(String s) {
        Set<Character> ans=new HashSet<Character>();
        int n=s.length();
        int num=0,j=-1;
        for(int i=0;i<n;i++)
        {
            if(i!=0)
            {
                ans.remove(s.charAt(i-1));
            }
            while(j+1<n&&!ans.contains(s.charAt(j+1)))
            {
                ans.add(s.charAt(j+1));
                ++j;
            }
            num=Math.max(num,j-i+1);
        }
        return num;

    }
}
