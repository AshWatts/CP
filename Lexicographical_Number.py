class Solution:
    def lexicalOrder(self, n: int) -> list[int]:
        result = []
        curr = 1
        for _ in range(n):
            result.append(curr)
            if curr * 10 <= n:
                curr *= 10  # Move to the next depth (append 0 at the end)
            else:
                while curr % 10 == 9 or curr + 1 > n:
                    curr //= 10  # Backtrack by removing the last digit
                curr += 1  # Increment to the next number in lexicographical order
        return result
    
def main():
    solution = Solution()
    n = 50  # Example input
    result = solution.lexicalOrder(n)
    print(result)

if __name__ == "__main__":
    main()