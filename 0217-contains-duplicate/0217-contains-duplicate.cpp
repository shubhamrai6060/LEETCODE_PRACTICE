class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hash;

        for (int num : nums) {
            if (hash.count(num)) {
                return true;
            }

            hash.insert(num);
        }

        return false;
        
    }
};