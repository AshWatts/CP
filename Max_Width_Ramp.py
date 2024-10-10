from typing import List

class Solution:
    def maxWidthRamp(self, nums: List[int]) -> int:
        n = len(nums)
        stack = []
        for i in range(n):
            if not stack or nums[stack[-1]] > nums[i]:
                stack.append(i)
        maxWidth = 0
        for j in range(n - 1, -1, -1):
            while stack and nums[stack[-1]] <= nums[j]:
                maxWidth = max(maxWidth, j - stack.pop())
        return maxWidth

def main():
    solution = Solution()
    test_case_1 = [6, 0, 8, 2, 1, 5]
    test_case_2 = [9, 8, 1, 0, 1, 9]
    print(solution.maxWidthRamp(test_case_1))
    print(solution.maxWidthRamp(test_case_2))

if __name__ == "__main__":
    main()