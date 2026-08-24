class Solution {
public:
    vector<vector<int>> ans;
    vector<int> subset;

    void solve(vector<int>& nums, int index) {

        ans.push_back(subset);

        for (int i = index; i < nums.size(); i++) {

          
            subset.push_back(nums[i]);

           
            solve(nums, i + 1);

            subset.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums, 0);
        return ans;
    }
};