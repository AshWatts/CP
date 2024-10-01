from typing import List

class Solution:
    def canArrange(self, arr: List[int], k: int) -> bool:
        freq = [0] * k
        for num in arr:
            remainder = (num % k + k) % k
            freq[remainder] += 1
        if freq[0] % 2 != 0:
            return False
        for i in range(1, k // 2 + 1):
            if freq[i] != freq[k - i]:
                return False
        if k % 2 == 0:
            if freq[k // 2] % 2 != 0:
                return False
        return True

def main():
    solution = Solution()

    arr1 = [1, 2, 3, 4, 5, 10, 6, 7, 8, 9]
    k1 = 5
    print(solution.canArrange(arr1, k1))  # Expected: True

    arr2 = [1, 2, 3, 4, 5, 6]
    k2 = 7
    print(solution.canArrange(arr2, k2))  # Expected: True

if __name__ == "__main__":
    main()