class Solution {
    public int climbStairs(int n) {
        int c1=1,c2=2,m=0;
        if(n<=2)
        {
            return n;
        }
        for(int i=2;i<n;i++)
        {
            m=c1+c2;
            c1=c2;
            c2=m;
        }
        return m;

    }
}
