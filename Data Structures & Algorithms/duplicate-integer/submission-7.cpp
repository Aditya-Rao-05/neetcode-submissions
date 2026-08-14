class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // create a set
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.contains(num)) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};