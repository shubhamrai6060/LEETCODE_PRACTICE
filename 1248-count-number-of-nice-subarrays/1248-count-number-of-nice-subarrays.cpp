class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        freq[0] = 1;

        int odd = 0;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {

          
            if (nums[i] % 2 != 0) {
                odd++;
            }

         
            if (freq.find(odd - k) != freq.end()) {
                ans += freq[odd - k];
            }

            freq[odd]++;
        }

        return ans;
    }
};