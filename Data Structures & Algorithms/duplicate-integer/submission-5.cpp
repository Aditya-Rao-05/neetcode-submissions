class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // create set first 
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num)) {
                return true;
                
            }
            seen.insert(num);
        }

        /*create the set first then add to the set then check if number is actually there 
        then check*/

        // then make the loop which looks 
        
    return false;
    }
    
};