from collections import defaultdict
from typing import List

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        boxes = defaultdict(list)

        for word in strs:
            label = "".join(sorted(word))
            boxes[label].append(word)

        return list(boxes.values())
        