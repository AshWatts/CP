class Solution:
    def largestNumber(self, nums: list[int]) -> str:
        # Convert integers to strings
        array = list(map(str, nums))
        
        # Custom sorting with a lambda function
        array.sort(key=lambda x: x*10, reverse=True)
        
        # Handle the case where the largest number is "0"
        if array[0] == "0":
            return "0"
        
        # Build the largest number from the sorted array
        largest = ''.join(array)
        
        return largest
    
def main():
    solution = Solution()
    nums = [3, 30, 34, 5, 9]
    print(solution.largestNumber(nums))

if __name__ == "__main__":
    main()