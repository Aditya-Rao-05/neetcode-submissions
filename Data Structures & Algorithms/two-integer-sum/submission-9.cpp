class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // based on target find indices of numbers that produce target and return their indices
        /*
        iterate through nums which is the dynamic array.
        brute force would check every possible option of addition against the target
        however that would be on^2 because of hte nested loop checking everything against itself again.

        but for this a hashmap would be best because it would store the occurrence of the complementary value that is required and its index which produces the target.
        so we'd neeed to find the complement which is the target minus current array value

        then use that as a checker against all the values in the hashmap.


        */

        unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; //. calculate the complement inside the loop because its ambiguous. 



            if (!seen.contains(complement)) {
                seen[nums[i]] = i;
            } else {
                return {seen[complement], i};
            }

        }

        



        
        
    }
};
