class Solution:
    def minSwaps(self, s: str) -> int:
        p = 0
        for c in s:
            p = max(0, p + (c == '[') - (c == ']'))
        return (p + 1) // 2

def main():
    solution = Solution()
    test_case_1 = "[[]][]"
    test_case_2 = "]]][[["
    print(solution.minSwaps(test_case_1))
    print(solution.minSwaps(test_case_2))

if __name__ == "__main__":
    main()
