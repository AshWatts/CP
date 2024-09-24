class Solution:
    def longestCommonPrefix(self, arr1: list[int], arr2: list[int]) -> int:
        prefix_map = {}
        
        # Step 1: Build the prefix map for arr1
        for num in arr1:
            str_num = str(num)
            prefix = ""
            for ch in str_num:
                prefix += ch
                prefix_map[prefix] = prefix_map.get(prefix, 0) + 1
        
        max_length = 0
        
        # Step 2: Check for common prefixes in arr2
        for num in arr2:
            str_num = str(num)
            prefix = ""
            for ch in str_num:
                prefix += ch
                if prefix in prefix_map:
                    max_length = max(max_length, len(prefix))
        
        return max_length
    
    # Example usage:
if __name__ == "__main__":
    solution = Solution()
    arr1 = [123, 124, 125]
    arr2 = [12, 1234, 1256]
    print(solution.longestCommonPrefix(arr1, arr2))  # Output should be 3