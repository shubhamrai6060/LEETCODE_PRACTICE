class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();

        vector<int> sum;
        sum.push_back(nums[0]);

        int currSum = nums[0];

        for(int i=1; i<n; i++){
            currSum += nums[i];
            sum.push_back(currSum);
        }

        return sum;
    }
};