class Solution {
    public int[] rearrangeArray(int[] nums) {

        int[] arr = new int[nums.length];
        int i = 0;
        int j = 1;
        for(int x : nums)
        {
            if(x > 0){
                arr[i] = x;
                i = i+2;
            }else{
                arr[j] = x;
                j = j+2;
            }
        }
        return arr;
        
    }
}