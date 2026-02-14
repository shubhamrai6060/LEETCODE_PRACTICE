class Solution {
    public int maxArea(int[] height) {
       int maxArea =0;
       int LeftPointer =0;
       int RightPointer=height.length -1;
       while (LeftPointer<RightPointer)
       {
        int length =Math.min(height[LeftPointer],height[RightPointer]);
        int width = RightPointer - LeftPointer;
        int current_area=length *width;
        maxArea=Math.max(current_area,maxArea);
        if(height[LeftPointer]<height[RightPointer])
        LeftPointer++;
        else
        RightPointer--;
       }
        return maxArea;
    }
}