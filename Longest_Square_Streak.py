from math import isqrt

class Solution:
    def longestSquareStreak(self, nums):
        mp = {}
        nums.sort()
        res = -1

        for num in nums:
            sqrt = isqrt(num)

            if sqrt * sqrt == num and sqrt in mp:
                mp[num] = mp[sqrt] + 1
                res = max(res, mp[num])
            else:
                mp[num] = 1

        return res

solution = Solution()
print(solution.longestSquareStreak([1, 4, 16, 256]))
print(solution.longestSquareStreak([1, 2, 3, 5, 7]))  
