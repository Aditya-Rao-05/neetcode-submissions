class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // create a map that stores thes hit

        // loop thru the nums

        // add it to the map and increment the count 

        // return true or false


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