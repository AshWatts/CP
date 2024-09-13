class Solution:
    def xorQueries(self, arr: list[int], queries: list[list[int]]) -> list[int]:
        # Step 1: Create a prefix XOR array
        n = len(arr)
        prefix_xor = [0] * (n + 1)
        
        # Fill the prefix_xor array
        for i in range(1, n + 1):
            prefix_xor[i] = prefix_xor[i - 1] ^ arr[i - 1]
        
        # Step 2: Answer each query
        result = []
        for left, right in queries:
            result.append(prefix_xor[right + 1] ^ prefix_xor[left])
        
        return result
    
def main():
    solution = Solution()
    arr = [1, 3, 4, 8]
    queries = [[0, 1], [1, 2], [0, 3], [3, 3]]
    result = solution.xorQueries(arr, queries)
    print(result)

if __name__ == "__main__":
    main()