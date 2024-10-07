class Solution:
    def minLength(self, s: str) -> int:
        stack = []
        for c in s:
            if stack and ((c == "B" and stack[-1] == "A") or (c == "D" and stack[-1] == "C")):
                stack.pop()
            else:
                stack.append(c)
        return len(stack)

def main():
    solution = Solution()
    test_case_1 = "AABCBDBD"
    test_case_2 = "ABCD"
    
    result_1 = solution.minLength(test_case_1)
    result_2 = solution.minLength(test_case_2)
    
    print(f"Result for test case 1: {result_1}")
    print(f"Result for test case 2: {result_2}")

if __name__ == "__main__":
    main()
