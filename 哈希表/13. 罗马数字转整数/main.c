class Solution {
    public int romanToInt(String s) {
        Map<Character,Integer> ans=new HashMap<Character,Integer>(){{
            put('I',1);
            put('V',5);
            put('X',10);
            put('L',50);
            put('C',100);
            put('D',500);
            put('M',1000);
        }};
        int n=s.length();
        int num=0;
        for(int i=0;i<n;i++)
        {
            if(i<n-1&&ans.get(s.charAt(i))<ans.get(s.charAt(i+1)))
            {
               num-=ans.get(s.charAt(i));
            }
            else{
            num+=ans.get(s.charAt(i));
            }
        }
        return num;
    }
    }
