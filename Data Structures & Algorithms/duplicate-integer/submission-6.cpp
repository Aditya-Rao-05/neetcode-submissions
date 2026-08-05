class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // create a hashset to insert things into 
    // as you iterate through the nums dynamic array you insert things you havent already seen because a hashset only has unique entries and is unordered (not important here)

    unordered_set<int> seen;

    for (int num : nums) {
        if (seen.count(num)) {
            return true;
        }
        seen.insert(num);
        
    }
        return false;
    }
};