from heapq import heapify, heappop, heappush
from typing import List

class Solution:
    def maxKelements(self, nums: List[int], k: int) -> int:
        heapify(pq := [-x for x in nums])
        score = 0
        for i in range(k):
            x = -heappop(pq)
            score += x
            if x == 1:
                score += k - 1 - i
                break
            heappush(pq, -((x + 2) // 3))
        return score

sol = Solution()
print(sol.maxKelements([10, 1, 2, 3, 4], 3))
print(sol.maxKelements([1, 2, 3, 4, 5], 2))