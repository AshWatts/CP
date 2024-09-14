class Solution(object):
    def longestSubarray(self, nums):
        ans, cnt = 0, 0
        
        max_element = max(nums)
        for num in nums:
            if num == max_element:
                cnt += 1
            else:
                cnt = 0
            ans = max(ans, cnt)
        return ans
    
if __name__ == "__main__":
    nums = [1, 2, 3, 3, 2, 2, 2, 3, 3, 3]
    solution = Solution()
    print("The length of the longest subarray is:", solution.longestSubarray(nums))