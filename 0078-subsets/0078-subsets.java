class Solution {

    public static void subsetfunc(int[] nums,int index,List<Integer>sublist,List<List<Integer>>ans)
    
    {
        ans.add(new ArrayList<>(sublist));

        for(int i = index; i < nums.length; i++)
        {
            sublist.add(nums[i]);
            subsetfunc(nums,i+1,sublist,ans);
            sublist.remove(sublist.size()-1);
        }
    }
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>>ans = new ArrayList<>();
        subsetfunc(nums,0,new ArrayList<>(),ans);
        return ans;
        
    }
}