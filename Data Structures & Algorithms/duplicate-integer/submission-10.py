class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:

        seen = set()

        for num in nums:
            if num in seen:
                return True # we've found the number in the set
            seen.add(num) #add if we don't have the num yet in the set
        
        return False # if we did not repeats



        