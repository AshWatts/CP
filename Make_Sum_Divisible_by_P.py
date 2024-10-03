class Solution:
    def minSubarray(self, nums: list[int], p: int) -> int:
        totalSum = sum(nums)
        rem = totalSum % p

        if rem == 0:
            return 0

        prefixMod = {0: -1}
        prefixSum = 0
        minLength = len(nums)

        for i, num in enumerate(nums):
            prefixSum += num
            currentMod = prefixSum % p
            targetMod = (currentMod - rem + p) % p

            if targetMod in prefixMod:
                minLength = min(minLength, i - prefixMod[targetMod])

            prefixMod[currentMod] = i

        return minLength if minLength < len(nums) else -1

def main():
    # Example usage
    solution = Solution()
    
    # Test case: List of integers and divisor 'p'
    nums = [3, 1, 4, 2]
    p = 6
    
    # Call the method minSubarray with nums and p
    result = solution.minSubarray(nums, p)
    
    # Output the result
    print(f"The minimum length of subarray to remove is: {result}")

if __name__ == "__main__":
    main()
